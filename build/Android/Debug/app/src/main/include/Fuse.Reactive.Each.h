// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.3.0-rc2/Each.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :94
// {
::g::Fuse::Reactive::Instantiator_type* Each_typeof();
void Each__get_Limit1_fn(Each* __this, int* __retval);
void Each__set_Limit1_fn(Each* __this, int* value);
void Each__get_Offset1_fn(Each* __this, int* __retval);
void Each__set_Offset1_fn(Each* __this, int* value);

struct Each : ::g::Fuse::Reactive::Instantiator
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return _eachHandle_; }

    int Limit1();
    void Limit1(int value);
    int Offset1();
    void Offset1(int value);
};
// }

}}} // ::g::Fuse::Reactive
