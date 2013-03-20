#!/bin/bash

echo "srcml to xml ..."

SPATH=$(pwd)
scope="src"
if [ -z $1 ]; then
    maxThreads=128
else
    maxThreads=$1
fi

cd $scope/srcml

threads=0
#for f in RGraphicsViewQt.srcml
for f in R[A-Z]*.srcml
do
	srcmlfile=${f##*/}
	basename=${srcmlfile%%.*}
	xmlfile="$scope/xml/$basename.xml"
	#if [ "$f" -nt "$SPATH/$xmlfile" -o "../../srcml2xml.xsl" -nt "$SPATH/$xmlfile" -o ! -s "$SPATH/$xmlfile" ]; then
		echo "processing $srcmlfile ..."
		(
            xsltproc "../../srcml2xml.xsl" "$f" >"$SPATH/$xmlfile"
			#4xslt --outfile="$SPATH/$xmlfile" "$f" "../../srcml2xml.xsl"
			tidy -q -i -xml -m "$SPATH/$xmlfile"
		) &
		if [ $? -eq 1 ]; then
			echo "error"
			exit 1
		fi

        let threads=threads+1
        if [ $threads -eq $maxThreads ]; then
            echo "waiting for threads to finish..."
            wait
            threads=0
        fi
	#fi
done

cd $SPATH

wait

#./rmorphans.sh $scope/srcml srcml $scope/xml xml

echo "done."
