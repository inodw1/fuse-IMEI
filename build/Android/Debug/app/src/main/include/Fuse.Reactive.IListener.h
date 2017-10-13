// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.3.0-rc2/IExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IListener :8
// {
uInterfaceType* IListener_typeof();

struct IListener
{
    void(*fp_OnNewData)(uObject*, uObject*, uObject*);
    static void OnNewData(const uInterface& __this, uObject* source, uObject* data) { __this.VTable<IListener>()->fp_OnNewData(__this, source, data); }
};
// }

}}} // ::g::Fuse::Reactive
