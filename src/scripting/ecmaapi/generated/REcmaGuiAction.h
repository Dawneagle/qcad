// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGUIACTION_H
        #define RECMAGUIACTION_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGuiAction.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaGuiAction {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQAction(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRFocusListener(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRTransactionListener(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRSelectionListener(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RFocusListener:
        

        // methods of secondary base class RFocusListener:
        
        // properties of secondary base class RTransactionListener:
        

        // methods of secondary base class RTransactionListener:
        
        // properties of secondary base class RSelectionListener:
        

        // methods of secondary base class RSelectionListener:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        setText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initTexts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatToolTip
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getToolTip
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocumentInterface
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShortcut
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefaultShortcut
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShortcuts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefaultShortcuts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefaultShortcuts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setShortcutText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShortcutText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroupSortOrderStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroupSortOrderOverrideStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGroupSortOrderStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSortOrderStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSortOrderOverrideStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortOrderStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroupSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroupSortOrderOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGroupSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSortOrderOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSortOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToMenu
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToToolBar
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        fixSeparators
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addSeparatorToWidget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToWidget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFromWidget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setIcon
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        disableIcon
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isIconDisabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setToolTip
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStatusTip
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEnabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEnabledOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setChecked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        triggerGroupDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        triggerGroupDefaults
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isChecked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRequiresDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRequiresDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRequiresSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRequiresSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRequiresUndoableTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRequiresUndoableTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRequiresRedoableTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRequiresRedoableTransaction
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isOverride
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setNoState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasNoState
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUniqueGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUniqueGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMainCommand
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCommands
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefaultCommands
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefaultCommands
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCommands
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setScriptFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScriptFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getScriptClass
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getGroup
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGroupDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGroupDefault
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getActions
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        triggerByCommand
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getByScriptFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getByClassName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        triggerByScriptFile
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAvailableCommands
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTransactionListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateSelectionListener
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addArgument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArguments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearArguments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setWidgetNamesStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidgetNamesStatic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setWidgetNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidgetNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        slotTrigger
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGuiAction* getSelf(const QString& fName, QScriptContext* context)
    ;static RGuiAction* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RGuiAction*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RGuiAction*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RGuiAction*
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
    };
    #endif
    