// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMALINEDATA_H
        #define RECMALINEDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLineData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaLineData {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
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
        getLine
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHull
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLineData* getSelf(const QString& fName, QScriptContext* context)
    ;static RLineData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    