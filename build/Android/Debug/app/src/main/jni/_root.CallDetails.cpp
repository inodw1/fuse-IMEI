// This file was generated based on CallDetails.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CallDetails.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Permissions.Permi-d35d5681.h>
#include <Uno.Permissions.Permissions.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{

// public sealed class CallDetails :19
// {
static void CallDetails_build(uType* type)
{
    ::STRINGS[0] = uString::Const("CallDetails");
    ::STRINGS[1] = uString::Const("callHistory");
    ::STRINGS[2] = uString::Const("You can access the Call_History now");
    ::STRINGS[3] = uString::Const("CallDetails.uno");
    ::STRINGS[4] = uString::Const("Blast: ");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Permissions::PlatformPermission_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&CallDetails::_instance_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&CallDetails::getPermission_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* CallDetails_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(CallDetails);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("CallDetails", options);
    type->fp_build_ = CallDetails_build;
    type->fp_ctor_ = (void*)CallDetails__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public CallDetails() :23
void CallDetails__ctor_2_fn(CallDetails* __this)
{
    __this->ctor_2();
}

// private object callHistory(Fuse.Scripting.Context c, object[] args) :30
void CallDetails__callHistory_fn(CallDetails* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->callHistory(c, args);
}

// public static extern string callHistoryImpl() :48
void CallDetails__callHistoryImpl_fn(uString** __retval)
{
    *__retval = CallDetails::callHistoryImpl();
}

// public CallDetails New() :23
void CallDetails__New2_fn(CallDetails** __retval)
{
    *__retval = CallDetails::New2();
}

// private void OnPermitted(Uno.Permissions.PlatformPermission permission) :36
void CallDetails__OnPermitted_fn(CallDetails* __this, ::g::Uno::Permissions::PlatformPermission* permission)
{
    __this->OnPermitted(*permission);
}

// private void OnRejected(Uno.Exception e) :42
void CallDetails__OnRejected_fn(CallDetails* __this, ::g::Uno::Exception* e)
{
    __this->OnRejected(e);
}

uSStrong<CallDetails*> CallDetails::_instance_;
uSStrong<uString*> CallDetails::getPermission_;

// public CallDetails() [instance] :23
void CallDetails::ctor_2()
{
    ctor_1();

    if (CallDetails::_instance_ != NULL)
        return;

    CallDetails::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(CallDetails::_instance_, ::STRINGS[0/*"CallDetails"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"callHistory"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)CallDetails__callHistory_fn, this)));
}

// private object callHistory(Fuse.Scripting.Context c, object[] args) [instance] :30
uObject* CallDetails::callHistory(::g::Fuse::Scripting::Context* c, uArray* args)
{
    ::g::Uno::Threading::Future1* permissionPromise = ::g::Uno::Permissions::Permissions::Request(::g::Uno::Permissions::Permissions__Android::READ_PHONE_STATE());
    uPtr(permissionPromise)->Then1(uDelegate::New(::TYPES[1/*Uno.Action<Uno.Permissions.PlatformPermission>*/], (void*)CallDetails__OnPermitted_fn, this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)CallDetails__OnRejected_fn, this));
    return CallDetails::getPermission_;
}

// private void OnPermitted(Uno.Permissions.PlatformPermission permission) [instance] :36
void CallDetails::OnPermitted(::g::Uno::Permissions::PlatformPermission permission)
{
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"You can acc...*/], 0, ::STRINGS[3/*"CallDetails...*/], 38);
    CallDetails::getPermission_ = CallDetails::callHistoryImpl();
}

// private void OnRejected(Uno.Exception e) [instance] :42
void CallDetails::OnRejected(::g::Uno::Exception* e)
{
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[4/*"Blast: "*/], uPtr(e)->Message()), 0, ::STRINGS[3/*"CallDetails...*/], 44);
}

// public static extern string callHistoryImpl() [static] :48
uString* CallDetails::callHistoryImpl()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "callHistoryImpl377", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public CallDetails New() [static] :23
CallDetails* CallDetails::New2()
{
    CallDetails* obj1 = (CallDetails*)uNew(CallDetails_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

} // ::g
