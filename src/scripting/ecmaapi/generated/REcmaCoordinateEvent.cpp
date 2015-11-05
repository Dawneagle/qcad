// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaCoordinateEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsView.h"
            
                #include "RGraphicsScene.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaInputEvent.h"
                 void REcmaCoordinateEvent::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RCoordinateEvent*) 0)));
        protoCreated = true;
    }

    
        // primary base class RInputEvent:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RInputEvent*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RInputEvent
        REcmaHelper::registerFunction(&engine, proto, getRInputEvent, "getRInputEvent");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RCoordinateEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RCoordinateEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaCoordinateEvent::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCoordinateEvent(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RCoordinateEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RCoordinateEvent: Argument 1 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RCoordinateEvent: Argument 2 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a2 = *ap2;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RCoordinateEvent
                    * cppResult =
                    new
                    RCoordinateEvent
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCoordinateEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaCoordinateEvent::getRInputEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RInputEvent* cppResult =
                    qscriptvalue_cast<RCoordinateEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaCoordinateEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RCoordinateEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaCoordinateEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RInputEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue REcmaCoordinateEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RCoordinateEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RCoordinateEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaCoordinateEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RCoordinateEvent* self = getSelf("RCoordinateEvent", context);
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
    RCoordinateEvent* REcmaCoordinateEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RCoordinateEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RCoordinateEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RCoordinateEvent.%1(): "
                        "This object is not a RCoordinateEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RCoordinateEvent* REcmaCoordinateEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RCoordinateEvent* selfBase = getSelf(fName, context);
                RCoordinateEvent* self = dynamic_cast<RCoordinateEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RCoordinateEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RCoordinateEvent.%1(): "
                    "This object is not a RCoordinateEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        