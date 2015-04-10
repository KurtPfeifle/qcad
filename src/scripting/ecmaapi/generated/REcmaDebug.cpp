// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDebug.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaDebug::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDebug*) 0)));
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
            qMetaTypeId<RDebug*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, printBacktrace, "printBacktrace");
            
            REcmaHelper::registerFunction(&engine, &ctor, startTimer, "startTimer");
            
            REcmaHelper::registerFunction(&engine, &ctor, stopTimer, "stopTimer");
            
            REcmaHelper::registerFunction(&engine, &ctor, timeStamp, "timeStamp");
            
            REcmaHelper::registerFunction(&engine, &ctor, hexDump, "hexDump");
            
            REcmaHelper::registerFunction(&engine, &ctor, incCounter, "incCounter");
            
            REcmaHelper::registerFunction(&engine, &ctor, decCounter, "decCounter");
            
            REcmaHelper::registerFunction(&engine, &ctor, printCounter, "printCounter");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDebug",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDebug::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDebug(): Did you forget to construct with 'new'?"),
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
            RDebug
                    * cppResult =
                    new
                    RDebug
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDebug(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaDebug::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDebug"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDebug::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDebug::printBacktrace
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::printBacktrace", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::printBacktrace";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       printBacktrace();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       printBacktrace(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.printBacktrace().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::printBacktrace", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::startTimer
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::startTimer", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::startTimer";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       startTimer();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       startTimer(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.startTimer().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::startTimer", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::stopTimer
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::stopTimer", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::stopTimer";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RDebug::
       stopTimer(a0);
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isNumber()
        ) /* type: int */
     && (
            context->argument(1).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'int'
    int cppResult =
        RDebug::
       stopTimer(a0
        ,
    a1);
        // return type: int
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.stopTimer().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::stopTimer", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::timeStamp
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::timeStamp", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::timeStamp";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       timeStamp();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.timeStamp().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::timeStamp", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::hexDump
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::hexDump", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::hexDump";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       hexDump(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.hexDump().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::hexDump", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::incCounter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::incCounter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::incCounter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       incCounter();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       incCounter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.incCounter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::incCounter", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::decCounter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::decCounter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::decCounter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       decCounter();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       decCounter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.decCounter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::decCounter", context, engine);
            return result;
        }
         QScriptValue
        REcmaDebug::printCounter
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDebug::printCounter", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDebug::printCounter";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       printCounter();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RDebug::
       printCounter(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDebug.printCounter().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDebug::printCounter", context, engine);
            return result;
        }
         QScriptValue REcmaDebug::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDebug* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDebug(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDebug::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDebug* self = getSelf("RDebug", context);
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
    RDebug* REcmaDebug::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDebug* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDebug >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDebug.%1(): "
                        "This object is not a RDebug").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDebug* REcmaDebug::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDebug* selfBase = getSelf(fName, context);
                RDebug* self = dynamic_cast<RDebug*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDebug >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDebug.%1(): "
                    "This object is not a RDebug").arg(fName),
                    context);
            }

            return self;
            


        }
        