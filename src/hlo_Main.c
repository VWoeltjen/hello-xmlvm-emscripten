#include "xmlvm.h"
#include "java_lang_String.h"

#include "hlo_Main.h"

#define XMLVM_CURRENT_CLASS_NAME Main
#define XMLVM_CURRENT_PKG_CLASS_NAME hlo_Main

__TIB_DEFINITION_hlo_Main __TIB_hlo_Main = {
    0, // classInitializationBegan
    0, // classInitialized
    -1, // initializerThreadId
    __INIT_hlo_Main, // classInitializer
    "hlo.Main", // className
    "hlo", // package
    JAVA_NULL, // enclosingClassName
    JAVA_NULL, // enclosingMethodName
    JAVA_NULL, // signature
    (__TIB_DEFINITION_TEMPLATE*) &__TIB_java_lang_Object, // extends
    sizeof(hlo_Main), // sizeInstance
    XMLVM_TYPE_CLASS};

JAVA_OBJECT __CLASS_hlo_Main;
JAVA_OBJECT __CLASS_hlo_Main_1ARRAY;
JAVA_OBJECT __CLASS_hlo_Main_2ARRAY;
JAVA_OBJECT __CLASS_hlo_Main_3ARRAY;
//XMLVM_BEGIN_IMPLEMENTATION
//XMLVM_END_IMPLEMENTATION


#include "xmlvm-reflection.h"

static XMLVM_FIELD_REFLECTION_DATA __field_reflection_data[] = {
};

static XMLVM_CONSTRUCTOR_REFLECTION_DATA __constructor_reflection_data[] = {
};

static JAVA_OBJECT constructor_dispatcher(JAVA_OBJECT constructor, JAVA_OBJECT arguments)
{
    XMLVM_NOT_IMPLEMENTED();
}

static XMLVM_METHOD_REFLECTION_DATA __method_reflection_data[] = {
};

static JAVA_OBJECT method_dispatcher(JAVA_OBJECT method, JAVA_OBJECT receiver, JAVA_OBJECT arguments)
{
    XMLVM_NOT_IMPLEMENTED();
}

void __INIT_hlo_Main()
{
    staticInitializerLock(&__TIB_hlo_Main);

    // While the static initializer mutex is locked, locally store the value of
    // whether class initialization began or not
    int initBegan = __TIB_hlo_Main.classInitializationBegan;

    // Whether or not class initialization had already began, it has begun now
    __TIB_hlo_Main.classInitializationBegan = 1;

    staticInitializerUnlock(&__TIB_hlo_Main);

    JAVA_LONG curThreadId = (JAVA_LONG)pthread_self();
    if (initBegan) {
        if (__TIB_hlo_Main.initializerThreadId != curThreadId) {
            // Busy wait until the other thread finishes initializing this class
            while (!__TIB_hlo_Main.classInitialized) {
                // do nothing
            }
        }
    } else {
        __TIB_hlo_Main.initializerThreadId = curThreadId;
        XMLVM_CLASS_USED("hlo.Main")
        __INIT_IMPL_hlo_Main();
    }
}

void __INIT_IMPL_hlo_Main()
{
    // Initialize base class if necessary
    if (!__TIB_java_lang_Object.classInitialized) __INIT_java_lang_Object();
    __TIB_hlo_Main.newInstanceFunc = __NEW_INSTANCE_hlo_Main;
    // Copy vtable from base class
    XMLVM_MEMCPY(__TIB_hlo_Main.vtable, __TIB_java_lang_Object.vtable, sizeof(__TIB_java_lang_Object.vtable));
    // Initialize vtable for this class
    // Initialize interface information
    __TIB_hlo_Main.numImplementedInterfaces = 0;
    __TIB_hlo_Main.implementedInterfaces = (__TIB_DEFINITION_TEMPLATE* (*)[1]) XMLVM_MALLOC(sizeof(__TIB_DEFINITION_TEMPLATE*) * 0);

    // Initialize interfaces if necessary and assign tib to implementedInterfaces

    __TIB_hlo_Main.declaredFields = &__field_reflection_data[0];
    __TIB_hlo_Main.numDeclaredFields = sizeof(__field_reflection_data) / sizeof(XMLVM_FIELD_REFLECTION_DATA);
    __TIB_hlo_Main.constructorDispatcherFunc = constructor_dispatcher;
    __TIB_hlo_Main.declaredConstructors = &__constructor_reflection_data[0];
    __TIB_hlo_Main.numDeclaredConstructors = sizeof(__constructor_reflection_data) / sizeof(XMLVM_CONSTRUCTOR_REFLECTION_DATA);
    __TIB_hlo_Main.methodDispatcherFunc = method_dispatcher;
    __TIB_hlo_Main.declaredMethods = &__method_reflection_data[0];
    __TIB_hlo_Main.numDeclaredMethods = sizeof(__method_reflection_data) / sizeof(XMLVM_METHOD_REFLECTION_DATA);
    __CLASS_hlo_Main = XMLVM_CREATE_CLASS_OBJECT(&__TIB_hlo_Main);
    __TIB_hlo_Main.clazz = __CLASS_hlo_Main;
    __TIB_hlo_Main.baseType = JAVA_NULL;
    __CLASS_hlo_Main_1ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_hlo_Main);
    __CLASS_hlo_Main_2ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_hlo_Main_1ARRAY);
    __CLASS_hlo_Main_3ARRAY = XMLVM_CREATE_ARRAY_CLASS_OBJECT(__CLASS_hlo_Main_2ARRAY);
    //XMLVM_BEGIN_WRAPPER[__INIT_hlo_Main]
    //XMLVM_END_WRAPPER

    __TIB_hlo_Main.classInitialized = 1;
}

void __DELETE_hlo_Main(void* me, void* client_data)
{
    //XMLVM_BEGIN_WRAPPER[__DELETE_hlo_Main]
    //XMLVM_END_WRAPPER
}

void __INIT_INSTANCE_MEMBERS_hlo_Main(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer)
{
    __INIT_INSTANCE_MEMBERS_java_lang_Object(me, 0 || derivedClassWillRegisterFinalizer);
    //XMLVM_BEGIN_WRAPPER[__INIT_INSTANCE_MEMBERS_hlo_Main]
    //XMLVM_END_WRAPPER
}

JAVA_OBJECT __NEW_hlo_Main()
{
    if (!__TIB_hlo_Main.classInitialized) __INIT_hlo_Main();
    hlo_Main* me = (hlo_Main*) XMLVM_MALLOC(sizeof(hlo_Main));
    me->tib = &__TIB_hlo_Main;
    __INIT_INSTANCE_MEMBERS_hlo_Main(me, 0);
    //XMLVM_BEGIN_WRAPPER[__NEW_hlo_Main]
    //XMLVM_END_WRAPPER
    return me;
}

JAVA_OBJECT __NEW_INSTANCE_hlo_Main()
{
    JAVA_OBJECT me = JAVA_NULL;
    me = __NEW_hlo_Main();
    hlo_Main___INIT___(me);
    return me;
}

void hlo_Main___INIT___(JAVA_OBJECT me)
{
    //XMLVM_BEGIN_WRAPPER[hlo_Main___INIT___]
    XMLVM_ENTER_METHOD("hlo.Main", "<init>", "?")
    XMLVMElem _r0;
    _r0.o = me;
    XMLVM_SOURCE_POSITION("Main.java", 3)
    XMLVM_CHECK_NPE(0)
    java_lang_Object___INIT___(_r0.o);
    XMLVM_EXIT_METHOD()
    return;
    //XMLVM_END_WRAPPER
}

void hlo_Main_main___java_lang_String_1ARRAY(JAVA_OBJECT n1)
{
    if (!__TIB_hlo_Main.classInitialized) __INIT_hlo_Main();
    //XMLVM_BEGIN_WRAPPER[hlo_Main_main___java_lang_String_1ARRAY]
    XMLVM_ENTER_METHOD("hlo.Main", "main", "?")
    XMLVMElem _r0;
    XMLVMElem _r1;
    _r1.o = n1;
    XMLVM_SOURCE_POSITION("Main.java", 5)
    _r0.o = __NEW_hlo_Main();
    XMLVM_CHECK_NPE(0)
    hlo_Main___INIT___(_r0.o);
    XMLVM_SOURCE_POSITION("Main.java", 6)
    XMLVM_EXIT_METHOD()
    return;
    //XMLVM_END_WRAPPER
}



//#if 0

#include <pthread.h> // for pthread_exit so the main thread doesn't terminate early

int main(int argc, char* argv[])
{
    xmlvm_init();

    // Initialize the main thread before entering XMLVM_SETJMP
    java_lang_Thread* mainThread = java_lang_Thread_currentThread__();
    if (XMLVM_SETJMP(xmlvm_exception_env_main_thread)) {
        // Technically, XMLVM_UNWIND_EXCEPTION() should be called, but
        // exceptions will not be used anymore and XMLVM_ENTER_METHOD() wasn't
        // called (excessive), so a compilation error would occur

        xmlvm_unhandled_exception();
    } else {
        hlo_Main_main___java_lang_String_1ARRAY(JAVA_NULL);
        printf("Hello!\n");
    }

#ifndef EMSCRIPTEN
    xmlvm_destroy(mainThread);
#endif

    return 0;
}
//#endif

