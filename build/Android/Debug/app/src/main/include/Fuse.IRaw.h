// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Common/1.3.0-rc2/IObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IRaw :4
// {
uInterfaceType* IRaw_typeof();

struct IRaw
{
    void(*fp_get_Raw)(uObject*, uObject**);
    static uObject* Raw(const uInterface& __this) { uObject* __retval; return __this.VTable<IRaw>()->fp_get_Raw(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse