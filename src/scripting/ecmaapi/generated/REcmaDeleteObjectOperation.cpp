// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDeleteObjectOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "RExporter.h"
            
                #include "RObject.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaDeleteObjectsOperation.h"
                 void REcmaDeleteObjectOperation::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDeleteObjectOperation*) 0)));
        protoCreated = true;
    }

    
        // primary base class RDeleteObjectsOperation:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RDeleteObjectsOperation*>());

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
    
        // conversion for base class RDeleteObjectsOperation
        REcmaHelper::registerFunction(&engine, proto, getRDeleteObjectsOperation, "getRDeleteObjectsOperation");
        
        // conversion for base class ROperation
        REcmaHelper::registerFunction(&engine, proto, getROperation, "getROperation");
        
        // conversion for base class RRequireHeap
        REcmaHelper::registerFunction(&engine, proto, getRRequireHeap, "getRRequireHeap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RDeleteObjectOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDeleteObjectOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDeleteObjectOperation::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteObjectOperation(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
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
                ) /* type: QSharedPointer < RObject > */
            
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        //QSharedPointer < RObject >(o0->clone());
                        QSharedPointer < RObject >(o0);
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RDeleteObjectOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RDeleteObjectOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteObjectOperation
                    * cppResult =
                    new
                    RDeleteObjectOperation
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        2
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
                ) /* type: QSharedPointer < RObject > */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        //QSharedPointer < RObject >(o0->clone());
                        QSharedPointer < RObject >(o0);
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RDeleteObjectOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RDeleteObjectOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteObjectOperation
                    * cppResult =
                    new
                    RDeleteObjectOperation
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteObjectOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDeleteObjectOperation::getRDeleteObjectsOperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RDeleteObjectsOperation* cppResult =
                    qscriptvalue_cast<RDeleteObjectOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteObjectOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RDeleteObjectOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteObjectOperation::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RDeleteObjectOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDeleteObjectOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDeleteObjectOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDeleteObjectOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RDeleteObjectsOperation");
    
        list.append("ROperation");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue REcmaDeleteObjectOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDeleteObjectOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDeleteObjectOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDeleteObjectOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDeleteObjectOperation* self = getSelf("RDeleteObjectOperation", context);
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
    RDeleteObjectOperation* REcmaDeleteObjectOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDeleteObjectOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDeleteObjectOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDeleteObjectOperation.%1(): "
                        "This object is not a RDeleteObjectOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDeleteObjectOperation* REcmaDeleteObjectOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDeleteObjectOperation* selfBase = getSelf(fName, context);
                RDeleteObjectOperation* self = dynamic_cast<RDeleteObjectOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDeleteObjectOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDeleteObjectOperation.%1(): "
                    "This object is not a RDeleteObjectOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        