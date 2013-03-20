#!/bin/bash

echo "xml to shell..."

scope="src"
if [ -z $1 ]; then
    maxThreads=128
else
    maxThreads=$1
fi

hasNoIndent=0
which indent 1>/dev/null 2>&1
hasNoIndent=$?

threads=0
for f in `find $scope/xml -name "R[A-Z]*.xml" | sort`
do
    for mode in h cpp
    do
        xmlfile=${f##*/}
        file=${xmlfile%%.*}
        ecmafile=$(echo $file|sed s/^R/REcmaSharedPointer/).$mode
        ecmapath=../../$scope/scripting/ecmaapi/$ecmafile
        grep "sharedPointerSupport=\"true\"" $f >/dev/null
        sharedPointerSupport=$?

        if [ $sharedPointerSupport = "0" ]; then
            echo "processing $file ($mode)"
            (
                xsltproc \
                    --stringparam scope $scope \
                    --stringparam mode $mode \
                    --param sharedPointerSupport 1 \
                    xml2cpp.xsl "$f" >"${ecmapath}_tmp"
                if [ -f $ecmapath ]; then
                    diff $ecmapath ${ecmapath}_tmp
                    if [ $? -eq 0 ]; then
                        rm ${ecmapath}_tmp
                    else
                        mv ${ecmapath}_tmp $ecmapath
                    fi
                else
                    mv ${ecmapath}_tmp $ecmapath
                fi
                if [ ! -s $ecmapath ]; then rm $ecmapath; fi
            ) &
            let threads=threads+1
            if [ $threads -eq $maxThreads ]; then
                echo "waiting for threads to finish..."
                wait
                threads=0
            fi
        fi
    done
done

wait

echo "done."
