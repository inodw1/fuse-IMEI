// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Animations/1.3.0-rc2/TriggerAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IPlayerFeedback :225
// {
uInterfaceType* IPlayerFeedback_typeof();

struct IPlayerFeedback
{
    void(*fp_OnProgressUpdated)(uObject*, uObject*, int*);
    static void OnProgressUpdated(const uInterface& __this, uObject* s, int flags) { __this.VTable<IPlayerFeedback>()->fp_OnProgressUpdated(__this, s, &flags); }
};
// }

}}} // ::g::Fuse::Animations
