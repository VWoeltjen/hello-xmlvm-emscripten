#ifndef __JAVA_LANG_SECURITYMANAGER__
#define __JAVA_LANG_SECURITYMANAGER__

#include "xmlvm.h"

// Preprocessor constants for interfaces:
#define XMLVM_ITABLE_SIZE_java_lang_SecurityManager 0
// Implemented interfaces:
// Super Class:
#include "java_lang_Object.h"

// Circular references:
#ifndef XMLVM_FORWARD_DECL_java_io_File
#define XMLVM_FORWARD_DECL_java_io_File
XMLVM_FORWARD_DECL(java_io_File)
#endif
#ifndef XMLVM_FORWARD_DECL_java_io_FileDescriptor
#define XMLVM_FORWARD_DECL_java_io_FileDescriptor
XMLVM_FORWARD_DECL(java_io_FileDescriptor)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Class
#define XMLVM_FORWARD_DECL_java_lang_Class
XMLVM_FORWARD_DECL(java_lang_Class)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_ClassLoader
#define XMLVM_FORWARD_DECL_java_lang_ClassLoader
XMLVM_FORWARD_DECL(java_lang_ClassLoader)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_ClassNotFoundException
#define XMLVM_FORWARD_DECL_java_lang_ClassNotFoundException
XMLVM_FORWARD_DECL(java_lang_ClassNotFoundException)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_NullPointerException
#define XMLVM_FORWARD_DECL_java_lang_NullPointerException
XMLVM_FORWARD_DECL(java_lang_NullPointerException)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_RuntimePermission
#define XMLVM_FORWARD_DECL_java_lang_RuntimePermission
XMLVM_FORWARD_DECL(java_lang_RuntimePermission)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_String
#define XMLVM_FORWARD_DECL_java_lang_String
XMLVM_FORWARD_DECL(java_lang_String)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_StringBuilder
#define XMLVM_FORWARD_DECL_java_lang_StringBuilder
XMLVM_FORWARD_DECL(java_lang_StringBuilder)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_Thread
#define XMLVM_FORWARD_DECL_java_lang_Thread
XMLVM_FORWARD_DECL(java_lang_Thread)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_ThreadGroup
#define XMLVM_FORWARD_DECL_java_lang_ThreadGroup
XMLVM_FORWARD_DECL(java_lang_ThreadGroup)
#endif
#ifndef XMLVM_FORWARD_DECL_java_lang_reflect_Constructor
#define XMLVM_FORWARD_DECL_java_lang_reflect_Constructor
XMLVM_FORWARD_DECL(java_lang_reflect_Constructor)
#endif
#ifndef XMLVM_FORWARD_DECL_java_net_InetAddress
#define XMLVM_FORWARD_DECL_java_net_InetAddress
XMLVM_FORWARD_DECL(java_net_InetAddress)
#endif
#ifndef XMLVM_FORWARD_DECL_java_security_AccessController
#define XMLVM_FORWARD_DECL_java_security_AccessController
XMLVM_FORWARD_DECL(java_security_AccessController)
#endif
#ifndef XMLVM_FORWARD_DECL_java_security_Permission
#define XMLVM_FORWARD_DECL_java_security_Permission
XMLVM_FORWARD_DECL(java_security_Permission)
#endif
#ifndef XMLVM_FORWARD_DECL_java_security_PrivilegedAction
#define XMLVM_FORWARD_DECL_java_security_PrivilegedAction
XMLVM_FORWARD_DECL(java_security_PrivilegedAction)
#endif
#ifndef XMLVM_FORWARD_DECL_java_util_PropertyPermission
#define XMLVM_FORWARD_DECL_java_util_PropertyPermission
XMLVM_FORWARD_DECL(java_util_PropertyPermission)
#endif
// Class declarations for java.lang.SecurityManager
XMLVM_DEFINE_CLASS(java_lang_SecurityManager, 6, XMLVM_ITABLE_SIZE_java_lang_SecurityManager)

extern JAVA_OBJECT __CLASS_java_lang_SecurityManager;
extern JAVA_OBJECT __CLASS_java_lang_SecurityManager_1ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_SecurityManager_2ARRAY;
extern JAVA_OBJECT __CLASS_java_lang_SecurityManager_3ARRAY;
//XMLVM_BEGIN_DECLARATIONS
#define __ADDITIONAL_INSTANCE_FIELDS_java_lang_SecurityManager
//XMLVM_END_DECLARATIONS

#define __INSTANCE_FIELDS_java_lang_SecurityManager \
    __INSTANCE_FIELDS_java_lang_Object; \
    struct { \
        JAVA_BOOLEAN inCheck_; \
        __ADDITIONAL_INSTANCE_FIELDS_java_lang_SecurityManager \
    } java_lang_SecurityManager

struct java_lang_SecurityManager {
    __TIB_DEFINITION_java_lang_SecurityManager* tib;
    struct {
        __INSTANCE_FIELDS_java_lang_SecurityManager;
    } fields;
};
#ifndef XMLVM_FORWARD_DECL_java_lang_SecurityManager
#define XMLVM_FORWARD_DECL_java_lang_SecurityManager
typedef struct java_lang_SecurityManager java_lang_SecurityManager;
#endif

#define XMLVM_VTABLE_SIZE_java_lang_SecurityManager 6

void __INIT_java_lang_SecurityManager();
void __INIT_IMPL_java_lang_SecurityManager();
void __DELETE_java_lang_SecurityManager(void* me, void* client_data);
void __INIT_INSTANCE_MEMBERS_java_lang_SecurityManager(JAVA_OBJECT me, int derivedClassWillRegisterFinalizer);
JAVA_OBJECT __NEW_java_lang_SecurityManager();
JAVA_OBJECT __NEW_INSTANCE_java_lang_SecurityManager();
JAVA_OBJECT java_lang_SecurityManager_GET_READ_WRITE_ALL_PROPERTIES_PERMISSION();
void java_lang_SecurityManager_PUT_READ_WRITE_ALL_PROPERTIES_PERMISSION(JAVA_OBJECT v);
JAVA_OBJECT java_lang_SecurityManager_GET_PKG_ACC_KEY();
void java_lang_SecurityManager_PUT_PKG_ACC_KEY(JAVA_OBJECT v);
JAVA_OBJECT java_lang_SecurityManager_GET_PKG_DEF_KEY();
void java_lang_SecurityManager_PUT_PKG_DEF_KEY(JAVA_OBJECT v);
void java_lang_SecurityManager___INIT___(JAVA_OBJECT me);
void java_lang_SecurityManager_checkAccept___java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
void java_lang_SecurityManager_checkAccess___java_lang_Thread(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkAccess___java_lang_ThreadGroup(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkConnect___java_lang_String_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
void java_lang_SecurityManager_checkConnect___java_lang_String_int_java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2, JAVA_OBJECT n3);
void java_lang_SecurityManager_checkCreateClassLoader__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkDelete___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkExec___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkExit___int(JAVA_OBJECT me, JAVA_INT n1);
void java_lang_SecurityManager_checkLink___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkListen___int(JAVA_OBJECT me, JAVA_INT n1);
void java_lang_SecurityManager_checkMemberAccess___java_lang_Class_int(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_INT n2);
void java_lang_SecurityManager_checkMulticast___java_net_InetAddress(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkMulticast___java_net_InetAddress_byte(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_BYTE n2);
void java_lang_SecurityManager_checkPackageAccess___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkPackageDefinition___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN java_lang_SecurityManager_checkPackageProperty___java_lang_String_java_lang_String(JAVA_OBJECT n1, JAVA_OBJECT n2);
void java_lang_SecurityManager_checkPropertiesAccess__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkPropertyAccess___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkRead___java_io_FileDescriptor(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkRead___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkRead___java_lang_String_java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void java_lang_SecurityManager_checkSecurityAccess___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkSetFactory__(JAVA_OBJECT me);
JAVA_BOOLEAN java_lang_SecurityManager_checkTopLevelWindow___java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkSystemClipboardAccess__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkAwtEventQueueAccess__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkPrintJobAccess__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkWrite___java_io_FileDescriptor(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkWrite___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN java_lang_SecurityManager_getInCheck__(JAVA_OBJECT me);
JAVA_OBJECT java_lang_SecurityManager_getClassContext__(JAVA_OBJECT me);
JAVA_OBJECT java_lang_SecurityManager_currentClassLoader__(JAVA_OBJECT me);
JAVA_INT java_lang_SecurityManager_classLoaderDepth__(JAVA_OBJECT me);
JAVA_OBJECT java_lang_SecurityManager_currentLoadedClass__(JAVA_OBJECT me);
JAVA_INT java_lang_SecurityManager_classDepth___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN java_lang_SecurityManager_inClass___java_lang_String(JAVA_OBJECT me, JAVA_OBJECT n1);
JAVA_BOOLEAN java_lang_SecurityManager_inClassLoader__(JAVA_OBJECT me);
JAVA_OBJECT java_lang_SecurityManager_getThreadGroup__(JAVA_OBJECT me);
JAVA_OBJECT java_lang_SecurityManager_getSecurityContext__(JAVA_OBJECT me);
void java_lang_SecurityManager_checkPermission___java_security_Permission(JAVA_OBJECT me, JAVA_OBJECT n1);
void java_lang_SecurityManager_checkPermission___java_security_Permission_java_lang_Object(JAVA_OBJECT me, JAVA_OBJECT n1, JAVA_OBJECT n2);
void java_lang_SecurityManager___CLINIT_();

#endif
