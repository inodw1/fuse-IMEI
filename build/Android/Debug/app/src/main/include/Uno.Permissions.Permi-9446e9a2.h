// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Uno.Permissions/1.3.1/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Permissions.IPerm-63840be1.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Uno{namespace Permissions{struct PermissionPromise;}}}

namespace g{
namespace Uno{
namespace Permissions{

// internal sealed class PermissionPromise :25
// {
struct PermissionPromise_type : ::g::Uno::Threading::Future_type
{
    ::g::Uno::Permissions::IPermissionPromise interface1;
};

PermissionPromise_type* PermissionPromise_typeof();
void PermissionPromise__ctor_7_fn(PermissionPromise* __this, ::g::Uno::Permissions::PlatformPermission* p);
void PermissionPromise__New5_fn(::g::Uno::Permissions::PlatformPermission* p, PermissionPromise** __retval);
void PermissionPromise__Resolve1_fn(PermissionPromise* __this);

struct PermissionPromise : ::g::Uno::Threading::Promise
{
    ::g::Uno::Permissions::PlatformPermission _permission;

    void ctor_7(::g::Uno::Permissions::PlatformPermission p);
    void Resolve1();
    static PermissionPromise* New5(::g::Uno::Permissions::PlatformPermission p);
};
// }

}}} // ::g::Uno::Permissions
