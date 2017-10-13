// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.Inter-b7b0d7de.h>
#include <Uno.Permissions.Platf-7d72d93e.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Uno{
namespace Permissions{
namespace Internal{

// C:\Users\Inod\AppData\Local\Fusetools\Packages\Uno.Permissions\1.3.1\AndroidPermissionsInternal.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed extern class Android :10
// {
static void Android_build(uType* type)
{
    ::STRINGS[0] = uString::Const("android.permission.READ_PHONE_STATE");
}

uType* Android_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Permissions.Internal.Android", options);
    type->fp_build_ = Android_build;
    return type;
}

// internal static extern Uno.Permissions.PlatformPermission _read_phone_state() :478
void Android___read_phone_state_fn(::g::Uno::Permissions::PlatformPermission* __retval)
{
    *__retval = Android::_read_phone_state();
}

// internal static extern Uno.Permissions.PlatformPermission _read_phone_state() [static] :478
::g::Uno::Permissions::PlatformPermission Android::_read_phone_state()
{
    return ::g::Uno::Permissions::PlatformPermission__New1(::STRINGS[0/*"android.per...*/]);
}
// }

}}}} // ::g::Uno::Permissions::Internal
