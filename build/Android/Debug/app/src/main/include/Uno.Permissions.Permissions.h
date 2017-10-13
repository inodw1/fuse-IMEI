// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Uno.Permissions/1.3.1/Permissions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Permissions{struct Permissions;}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Uno{
namespace Permissions{

// public static extern class Permissions :53
// {
uClassType* Permissions_typeof();
void Permissions__Failed_fn(uObject* promise);
void Permissions__Request_fn(::g::Uno::Permissions::PlatformPermission* x, ::g::Uno::Threading::Future1** __retval);
void Permissions__requestPermission_fn(::g::Uno::Threading::Promise* promise, uString* permissionName);
void Permissions__Succeeded_fn(uObject* promise);

struct Permissions : uObject
{
    static void Failed(uObject* promise);
    static ::g::Uno::Threading::Future1* Request(::g::Uno::Permissions::PlatformPermission x);
    static void requestPermission(::g::Uno::Threading::Promise* promise, uString* permissionName);
    static void Succeeded(uObject* promise);
};
// }

}}} // ::g::Uno::Permissions
