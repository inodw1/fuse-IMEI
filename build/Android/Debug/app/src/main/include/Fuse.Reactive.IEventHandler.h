// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.3.0-rc2/IEventHandler.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IEventHandler :16
// {
uInterfaceType* IEventHandler_typeof();

struct IEventHandler
{
    void(*fp_Dispatch)(uObject*, uObject*);
    static void Dispatch(const uInterface& __this, uObject* e) { __this.VTable<IEventHandler>()->fp_Dispatch(__this, e); }
};
// }

}}} // ::g::Fuse::Reactive
