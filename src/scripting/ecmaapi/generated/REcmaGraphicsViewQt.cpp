// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaGraphicsViewQt.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RAction.h"
            
                #include "RDocument.h"
            
                #include "RDocumentInterface.h"
            
                #include "RFocusFrame.h"
            
                #include "RGraphicsSceneQt.h"
            
                #include "RLine.h"
            
                #include "RSnap.h"
            
                #include "RSnapRestriction.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaGraphicsViewQt::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RGraphicsViewQt*) 0)));
        protoCreated = true;
    }

    
        // primary base class QWidget:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QWidget*>());

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
    
        // conversion for base class QWidget
        REcmaHelper::registerFunction(&engine, proto, getQWidget, "getQWidget");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, setImageView, "setImageView");
            
            REcmaHelper::registerFunction(&engine, proto, getImageView, "getImageView");
            
            REcmaHelper::registerFunction(&engine, proto, disableGestures, "disableGestures");
            
            REcmaHelper::registerFunction(&engine, proto, removeFocus, "removeFocus");
            
            REcmaHelper::registerFunction(&engine, proto, getWidth, "getWidth");
            
            REcmaHelper::registerFunction(&engine, proto, getHeight, "getHeight");
            
            REcmaHelper::registerFunction(&engine, proto, getRect, "getRect");
            
            REcmaHelper::registerFunction(&engine, proto, getSignalsBlocked, "getSignalsBlocked");
            
            REcmaHelper::registerFunction(&engine, proto, setSignalsBlocked, "setSignalsBlocked");
            
            REcmaHelper::registerFunction(&engine, proto, setFocusFrameWidget, "setFocusFrameWidget");
            
            REcmaHelper::registerFunction(&engine, proto, simulateMouseMoveEvent, "simulateMouseMoveEvent");
            
            REcmaHelper::registerFunction(&engine, proto, sizeHint, "sizeHint");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RGraphicsViewQt*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RGraphicsViewQt*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RGraphicsViewQt",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaGraphicsViewQt::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RGraphicsViewQt(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellGraphicsViewQt
                    * cppResult =
                    new
                    REcmaShellGraphicsViewQt
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellGraphicsViewQt
                    * cppResult =
                    new
                    REcmaShellGraphicsViewQt
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellGraphicsViewQt
                    * cppResult =
                    new
                    REcmaShellGraphicsViewQt
                    (
                    a0
        ,
    a1
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RGraphicsViewQt(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaGraphicsViewQt::getQWidget(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QWidget* cppResult =
                    qscriptvalue_cast<RGraphicsViewQt*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaGraphicsViewQt::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RGraphicsViewQt"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaGraphicsViewQt::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QWidget");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaGraphicsViewQt::setImageView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::setImageView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::setImageView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("setImageView", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isQObject()
        ) /* type: RGraphicsViewImage * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RGraphicsViewImage * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RGraphicsViewImage >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RGraphicsViewQt: Argument 0 is not of type RGraphicsViewImage *RGraphicsViewImage *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setImageView(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.setImageView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::setImageView", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::getImageView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::getImageView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::getImageView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("getImageView", context);
                  

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
    // return type 'RGraphicsViewImage *'
    RGraphicsViewImage * cppResult =
        
               self->getImageView();
        // return type: RGraphicsViewImage *
                // QObject
                result = engine->newQObject(cppResult, QScriptEngine::QtOwnership);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.getImageView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::getImageView", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::disableGestures
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::disableGestures", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::disableGestures";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("disableGestures", context);
                  

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
    
               self->disableGestures();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.disableGestures().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::disableGestures", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::removeFocus
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::removeFocus", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::removeFocus";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("removeFocus", context);
                  

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
    
               self->removeFocus();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.removeFocus().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::removeFocus", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::getWidth", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::getWidth";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("getWidth", context);
                  

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
    // return type 'int'
    int cppResult =
        
               self->getWidth();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.getWidth().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::getWidth", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::getHeight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::getHeight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("getHeight", context);
                  

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
    // return type 'int'
    int cppResult =
        
               self->getHeight();
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.getHeight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::getHeight", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::getRect
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::getRect", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::getRect";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("getRect", context);
                  

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
    // return type 'QRect'
    QRect cppResult =
        
               self->getRect();
        // return type: QRect
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.getRect().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::getRect", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::getSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::getSignalsBlocked", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::getSignalsBlocked";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("getSignalsBlocked", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->getSignalsBlocked();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.getSignalsBlocked().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::getSignalsBlocked", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::setSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::setSignalsBlocked", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::setSignalsBlocked";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("setSignalsBlocked", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setSignalsBlocked(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.setSignalsBlocked().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::setSignalsBlocked", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::setFocusFrameWidget
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::setFocusFrameWidget", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::setFocusFrameWidget";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("setFocusFrameWidget", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QFrame * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    QFrame * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<QFrame >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RGraphicsViewQt: Argument 0 is not of type QFrame *QFrame *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setFocusFrameWidget(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.setFocusFrameWidget().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::setFocusFrameWidget", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::simulateMouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::simulateMouseMoveEvent", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::simulateMouseMoveEvent";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("simulateMouseMoveEvent", context);
                  

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
    
               self->simulateMouseMoveEvent();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.simulateMouseMoveEvent().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::simulateMouseMoveEvent", context, engine);
            return result;
        }
         QScriptValue
        REcmaGraphicsViewQt::sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaGraphicsViewQt::sizeHint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaGraphicsViewQt::sizeHint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RGraphicsViewQt* self = 
                        getSelf("sizeHint", context);
                  

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
    // return type 'QSize'
    QSize cppResult =
        
               self->sizeHint();
        // return type: QSize
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RGraphicsViewQt.sizeHint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaGraphicsViewQt::sizeHint", context, engine);
            return result;
        }
         QScriptValue REcmaGraphicsViewQt::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RGraphicsViewQt* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RGraphicsViewQt(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaGraphicsViewQt::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RGraphicsViewQt* self = getSelf("RGraphicsViewQt", context);
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
    RGraphicsViewQt* REcmaGraphicsViewQt::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RGraphicsViewQt* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RGraphicsViewQt >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RGraphicsViewQt.%1(): "
                        "This object is not a RGraphicsViewQt").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellGraphicsViewQt* REcmaGraphicsViewQt::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RGraphicsViewQt* selfBase = getSelf(fName, context);
                REcmaShellGraphicsViewQt* self = dynamic_cast<REcmaShellGraphicsViewQt*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellGraphicsViewQt >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RGraphicsViewQt.%1(): "
                    "This object is not a RGraphicsViewQt").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RGraphicsViewQt*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RGraphicsViewQt*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RGraphicsViewQt*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    