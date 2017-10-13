// This file was generated based on CallDetails.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{struct CallDetails;}

namespace g{

// public sealed class CallDetails :19
// {
::g::Fuse::Scripting::NativeModule_type* CallDetails_typeof();
void CallDetails__ctor_2_fn(CallDetails* __this);
void CallDetails__callHistory_fn(CallDetails* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void CallDetails__callHistoryImpl_fn(uString** __retval);
void CallDetails__New2_fn(CallDetails** __retval);
void CallDetails__OnPermitted_fn(CallDetails* __this, ::g::Uno::Permissions::PlatformPermission* permission);
void CallDetails__OnRejected_fn(CallDetails* __this, ::g::Uno::Exception* e);

struct CallDetails : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<CallDetails*> _instance_;
    static uSStrong<CallDetails*>& _instance() { return _instance_; }
    static uSStrong<uString*> getPermission_;
    static uSStrong<uString*>& getPermission() { return getPermission_; }

    void ctor_2();
    uObject* callHistory(::g::Fuse::Scripting::Context* c, uArray* args);
    void OnPermitted(::g::Uno::Permissions::PlatformPermission permission);
    void OnRejected(::g::Uno::Exception* e);
    static uString* callHistoryImpl();
    static CallDetails* New2();
};
// }

} // ::g
