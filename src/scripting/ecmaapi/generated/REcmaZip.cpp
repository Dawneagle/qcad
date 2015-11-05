// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaZip.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaZip::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RZip*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RZip*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, unzipFile, "unzipFile");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RZip",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaZip::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RZip(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RZip
                    * cppResult =
                    new
                    RZip
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RZip(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaZip::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RZip"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaZip::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaZip::unzipFile
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaZip::unzipFile", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaZip::unzipFile";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isString()
        ) /* type: QString */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RZip::
       unzipFile(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RZip.unzipFile().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaZip::unzipFile", context, engine);
            return result;
        }
         QScriptValue REcmaZip::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RZip* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RZip(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaZip::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RZip* self = getSelf("RZip", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RZip* REcmaZip::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RZip* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RZip >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RZip.%1(): "
                        "This object is not a RZip").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RZip* REcmaZip::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RZip* selfBase = getSelf(fName, context);
                RZip* self = dynamic_cast<RZip*>(selfBase);
                //return REcmaHelper::scriptValueTo<RZip >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RZip.%1(): "
                    "This object is not a RZip").arg(fName),
                    context);
            }

            return self;
            


        }
        