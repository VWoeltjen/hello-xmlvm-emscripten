#ifndef __HLO_MAIN__
#define __HLO_MAIN__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#define XMLVM_ITABLE_SIZE_hlo_Main 0
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
// Class declarations for hlo.Main
XMLVM_DEFINE_CLASS(hlo_Main, 6, XMLVM_ITABLE_SIZE_hlo_Main)

extern JAVA_OBJECT __CLASS_hlo_Main;
extern JAVA_OBJECT __CLASS_hlo_Main_1ARRAY;
extern JAVA_OBJECT __CLASS_hlo_Main_2ARRAY;
extern JAVA_OBJECT __CLASS_hlo_Main_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_hlo_Main
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_hlo_Main \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        __ADDITIONAL_INSTANCE_FIELDS_hlo_Main \
    } hlo_Main

struct hlo_Main {
    __TIB_DEFINITION_hlo_Main* tib;
    struct {
        __INSTANCE_FIELDS_hlo_Main;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_hlo_Main
#define XMLVM_FORWARD_DECL_hlo_Main
typedef struct hlo_Main hlo_Main;
#endif

#define XMLVM_VTABLE_SIZE_hlo_Main 6

void __INIT_hlo_Main();
void __INIT_IMPL_hlo_Main();
void __DELETE_hlo_Main(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_hlo_Main(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_hlo_Main();
JAVA_OBJECT __NEW_INSTANCE_hlo_Main();
void hlo_Main___INIT___(JAVA_OBJECT me);
void hlo_Main_main___java_lang_String_1ARRAY(JAVA_OBJECT n1);

#endif
