// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.3.0-rc2/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRangeViewHost :60
// {
uInterfaceType* IRangeViewHost_typeof();

struct IRangeViewHost
{
    void(*fp_OnProgressChanged)(uObject*, double*);
    static void OnProgressChanged(const uInterface& __this, double newProgress) { __this.VTable<IRangeViewHost>()->fp_OnProgressChanged(__this, &newProgress); }
};
// }

}}}} // ::g::Fuse::Controls::Native
