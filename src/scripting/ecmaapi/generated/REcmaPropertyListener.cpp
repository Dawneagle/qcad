// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPropertyListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "REntity.h"
            
                #include "RDocument.h"
            
                #include "RObject.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaPropertyListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPropertyListener*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, updateFromDocument, "updateFromDocument");
            
            REcmaHelper::registerFunction(&engine, proto, updateFromObject, "updateFromObject");
            
            REcmaHelper::registerFunction(&engine, proto, clearEditor, "clearEditor");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPropertyListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPropertyListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPropertyListener::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RPropertyListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPropertyListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPropertyListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPropertyListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPropertyListener::updateFromDocument
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListener::updateFromDocument", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListener::updateFromDocument";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListener* self = 
                        getSelf("updateFromDocument", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1);
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: RS::EntityType */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1
        ,
    a2);
    } else


        
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isNumber()
        ) /* type: RS::EntityType */
     && (
            context->argument(3).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    RS::EntityType
                    a2 =
                    (RS::EntityType)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    bool
                    a3 =
                    (bool)
                    
                    context->argument( 3 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromDocument(a0
        ,
    a1
        ,
    a2
        ,
    a3);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListener.updateFromDocument().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListener::updateFromDocument", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyListener::updateFromObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListener::updateFromObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListener::updateFromObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListener* self = 
                        getSelf("updateFromObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RObject * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RObject * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RObject >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 0 is not of type RObject *RObject *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromObject(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RObject * */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RDocument * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RObject * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RObject >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 0 is not of type RObject *RObject *.", context);                    
                    }
                
                    // argument is pointer
                    RDocument * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RPropertyListener: Argument 1 is not of type RDocument *RDocument *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateFromObject(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListener.updateFromObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListener::updateFromObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaPropertyListener::clearEditor
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPropertyListener::clearEditor", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPropertyListener::clearEditor";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPropertyListener* self = 
                        getSelf("clearEditor", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clearEditor();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPropertyListener.clearEditor().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPropertyListener::clearEditor", context, engine);
            return result;
        }
         QScriptValue REcmaPropertyListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPropertyListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPropertyListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPropertyListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPropertyListener* self = getSelf("RPropertyListener", context);
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
    RPropertyListener* REcmaPropertyListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPropertyListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPropertyListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPropertyListener.%1(): "
                        "This object is not a RPropertyListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPropertyListener* REcmaPropertyListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPropertyListener* selfBase = getSelf(fName, context);
                RPropertyListener* self = dynamic_cast<RPropertyListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPropertyListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPropertyListener.%1(): "
                    "This object is not a RPropertyListener").arg(fName),
                    context);
            }

            return self;
            


        }
        