// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGRAPHICSSCENEQT_H
        #define RECMAGRAPHICSSCENEQT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGraphicsSceneQt.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaGraphicsSceneQt {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRGraphicsScene(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRExporter(QScriptContext *context,
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
        getGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateSelectionStatus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        beginPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unexportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEllipse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportThickPolyline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPolyline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPolylineFill
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportSpline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportArcSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportLineSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportXLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportRay
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportTriangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportRectangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportImage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportClipRectangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineTypePatternScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        highlightEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deletePainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviewEntityIds
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviewPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPreviewTexts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addTextToPreview
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasImageFor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getImages
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasTextsFor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTexts
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasClipRectangleFor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClipRectangle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        startEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dump
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGraphicsSceneQt* getSelf(const QString& fName, QScriptContext* context)
    ;static RGraphicsSceneQt* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    