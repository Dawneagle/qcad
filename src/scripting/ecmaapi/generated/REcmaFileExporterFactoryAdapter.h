// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAFILEEXPORTERFACTORYADAPTER_H
        #define RECMAFILEEXPORTERFACTORYADAPTER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellFileExporterFactoryAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaFileExporterFactoryAdapter {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRFileExporterFactory(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        getFilterStrings
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        canExport
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        instantiate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RFileExporterFactoryAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellFileExporterFactoryAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    