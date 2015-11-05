// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaPatternLine.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaPatternLine::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPatternLine*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, getPainterPath, "getPainterPath");
            
            REcmaHelper::registerFunction(&engine, proto, getLines, "getLines");
            
            REcmaHelper::registerFunction(&engine, proto, getLength, "getLength");
            
            REcmaHelper::registerFunction(&engine, proto, scale, "scale");
            
            REcmaHelper::registerFunction(&engine, proto, rotate, "rotate");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPatternLine*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPatternLine",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPatternLine::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPatternLine(): Did you forget to construct with 'new'?"),
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
            RPatternLine
                    * cppResult =
                    new
                    RPatternLine
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPatternLine(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaPatternLine::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPatternLine"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPatternLine::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPatternLine::getPainterPath
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPatternLine::getPainterPath", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPatternLine::getPainterPath";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPatternLine* self = 
                        getSelf("getPainterPath", context);
                  

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
    // return type 'RPainterPath'
    RPainterPath cppResult =
        
               self->getPainterPath();
        // return type: RPainterPath
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPatternLine.getPainterPath().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPatternLine::getPainterPath", context, engine);
            return result;
        }
         QScriptValue
        REcmaPatternLine::getLines
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPatternLine::getLines", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPatternLine::getLines";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPatternLine* self = 
                        getSelf("getLines", context);
                  

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
    // return type 'QList < RLine >'
    QList < RLine > cppResult =
        
               self->getLines();
        // return type: QList < RLine >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPatternLine.getLines().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPatternLine::getLines", context, engine);
            return result;
        }
         QScriptValue
        REcmaPatternLine::getLength
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPatternLine::getLength", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPatternLine::getLength";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPatternLine* self = 
                        getSelf("getLength", context);
                  

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
    // return type 'double'
    double cppResult =
        
               self->getLength();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPatternLine.getLength().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPatternLine::getLength", context, engine);
            return result;
        }
         QScriptValue
        REcmaPatternLine::scale
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPatternLine::scale", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPatternLine::scale";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPatternLine* self = 
                        getSelf("scale", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->scale(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPatternLine.scale().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPatternLine::scale", context, engine);
            return result;
        }
         QScriptValue
        REcmaPatternLine::rotate
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPatternLine::rotate", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPatternLine::rotate";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPatternLine* self = 
                        getSelf("rotate", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    double
                    a0 =
                    (double)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->rotate(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPatternLine.rotate().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPatternLine::rotate", context, engine);
            return result;
        }
         QScriptValue REcmaPatternLine::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPatternLine* self = getSelf("toString", context);
    
    QString result;
    
            QDebug d(&result);
            if (self!=NULL) {
                d << *self;
            }
            else {
                d << "NULL";
            }
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPatternLine::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPatternLine* self = getSelf("RPatternLine", context);
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
    RPatternLine* REcmaPatternLine::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPatternLine* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPatternLine >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPatternLine.%1(): "
                        "This object is not a RPatternLine").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPatternLine* REcmaPatternLine::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPatternLine* selfBase = getSelf(fName, context);
                RPatternLine* self = dynamic_cast<RPatternLine*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPatternLine >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPatternLine.%1(): "
                    "This object is not a RPatternLine").arg(fName),
                    context);
            }

            return self;
            


        }
        