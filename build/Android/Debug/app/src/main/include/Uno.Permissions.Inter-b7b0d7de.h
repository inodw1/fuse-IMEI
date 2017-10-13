// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Uno.Permissions/1.3.1/AndroidPermissionsInternal.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Permissions{namespace Internal{struct Android;}}}}
namespace g{namespace Uno{namespace Permissions{struct PlatformPermission;}}}

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// internal sealed extern class Android :10
// {
uType* Android_typeof();
void Android___read_phone_state_fn(::g::Uno::Permissions::PlatformPermission* __retval);

struct Android : uObject
{
    static ::g::Uno::Permissions::PlatformPermission _read_phone_state();
};
// }

}}}} // ::g::Uno::Permissions::Internal
