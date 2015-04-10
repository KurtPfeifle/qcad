// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaDimAlignedData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaDimLinearData.h"
                 void REcmaDimAlignedData::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDimAlignedData*) 0)));
        protoCreated = true;
    }

    
        // primary base class RDimLinearData:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RDimLinearData*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RDimLinearData
        REcmaHelper::registerFunction(&engine, proto, getRDimLinearData, "getRDimLinearData");
        
        // conversion for base class RDimensionData
        REcmaHelper::registerFunction(&engine, proto, getRDimensionData, "getRDimensionData");
        
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getReferencePoints, "getReferencePoints");
            
            REcmaHelper::registerFunction(&engine, proto, moveReferencePoint, "moveReferencePoint");
            
            REcmaHelper::registerFunction(&engine, proto, recomputeDefinitionPoint, "recomputeDefinitionPoint");
            
            REcmaHelper::registerFunction(&engine, proto, getShapes, "getShapes");
            
            REcmaHelper::registerFunction(&engine, proto, getMeasuredValue, "getMeasuredValue");
            
            REcmaHelper::registerFunction(&engine, proto, getAutoLabel, "getAutoLabel");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RDimAlignedData*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RDimAlignedData
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDimAlignedData",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDimAlignedData::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDimAlignedData(): Did you forget to construct with 'new'?"),
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
    
            // copyable class:
            RDimAlignedData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

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
                ) /* type: RDimensionData */
            
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
                ) /* type: RVector */
            
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
                ) /* type: RVector */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDimensionData*
                    ap0 =
                    qscriptvalue_cast<
                    RDimensionData*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RDimAlignedData: Argument 0 is not of type RDimensionData*.",
                               context);                    
                    }
                    RDimensionData& a0 = *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap2 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if (ap2 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 2 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a2 = 
                    *ap2;
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RDimAlignedData
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDimAlignedData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDimAlignedData::getRDimLinearData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RDimLinearData* cppResult =
                    qscriptvalue_cast<RDimAlignedData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDimAlignedData::getRDimensionData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RDimensionData* cppResult =
                    qscriptvalue_cast<RDimAlignedData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDimAlignedData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RDimAlignedData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDimAlignedData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDimAlignedData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDimAlignedData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RDimLinearData");
    
        list.append("RDimensionData");
    
        list.append("REntityData");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDimAlignedData::getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::getReferencePoints", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::getReferencePoints";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("getReferencePoints", context);
                  

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
    // return type 'QList < RVector >'
    QList < RVector > cppResult =
        
               self->getReferencePoints();
        // return type: QList < RVector >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RS::ProjectionRenderingHint */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RS::ProjectionRenderingHint
                    a0 =
                    (RS::ProjectionRenderingHint)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RVector >'
    QList < RVector > cppResult =
        
               self->getReferencePoints(a0);
        // return type: QList < RVector >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.getReferencePoints().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::getReferencePoints", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAlignedData::moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::moveReferencePoint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::moveReferencePoint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("moveReferencePoint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RVector */
    
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
                           return REcmaHelper::throwError("RDimAlignedData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->moveReferencePoint(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.moveReferencePoint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::moveReferencePoint", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAlignedData::recomputeDefinitionPoint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::recomputeDefinitionPoint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::recomputeDefinitionPoint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("recomputeDefinitionPoint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    4 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RVector */
     && (
            context->argument(2).isVariant() || 
            context->argument(2).isQObject() || 
            context->argument(2).isNull()
        ) /* type: RVector */
     && (
            context->argument(3).isVariant() || 
            context->argument(3).isQObject() || 
            context->argument(3).isNull()
        ) /* type: RVector */
    
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
                           return REcmaHelper::throwError("RDimAlignedData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap2 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if (ap2 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 2 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a2 = 
                    *ap2;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap3 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        3
                        )
                    );
                    if (ap3 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 3 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a3 = 
                    *ap3;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->recomputeDefinitionPoint(a0
        ,
    a1
        ,
    a2
        ,
    a3);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.recomputeDefinitionPoint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::recomputeDefinitionPoint", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAlignedData::getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::getShapes", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::getShapes";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("getShapes", context);
                  

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
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes();
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RDimAlignedData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0
        ,
    a1);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.getShapes().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::getShapes", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAlignedData::getMeasuredValue
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::getMeasuredValue", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::getMeasuredValue";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("getMeasuredValue", context);
                  

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
        
               self->getMeasuredValue();
        // return type: double
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.getMeasuredValue().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::getMeasuredValue", context, engine);
            return result;
        }
         QScriptValue
        REcmaDimAlignedData::getAutoLabel
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDimAlignedData::getAutoLabel", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDimAlignedData::getAutoLabel";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDimAlignedData* self = 
                        getSelf("getAutoLabel", context);
                  

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
    // return type 'QString'
    QString cppResult =
        
               self->getAutoLabel();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDimAlignedData.getAutoLabel().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDimAlignedData::getAutoLabel", context, engine);
            return result;
        }
         QScriptValue REcmaDimAlignedData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDimAlignedData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDimAlignedData(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDimAlignedData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RDimAlignedData cp = qscriptvalue_cast<RDimAlignedData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaDimAlignedData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDimAlignedData* self = getSelf("RDimAlignedData", context);
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
    RDimAlignedData* REcmaDimAlignedData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDimAlignedData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDimAlignedData >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDimAlignedData.%1(): "
                        "This object is not a RDimAlignedData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDimAlignedData* REcmaDimAlignedData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDimAlignedData* selfBase = getSelf(fName, context);
                RDimAlignedData* self = dynamic_cast<RDimAlignedData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDimAlignedData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDimAlignedData.%1(): "
                    "This object is not a RDimAlignedData").arg(fName),
                    context);
            }

            return self;
            


        }
        