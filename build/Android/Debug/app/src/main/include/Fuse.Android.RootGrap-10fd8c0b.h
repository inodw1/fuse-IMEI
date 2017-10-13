// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Android/1.3.0-rc2/.uno/ux13/Fuse.Android.RootGraphicsView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-ca2427b3.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{struct RootGraphicsView;}}}
namespace g{namespace Fuse{namespace Android{struct RootGraphicsView__Template1;}}}

namespace g{
namespace Fuse{
namespace Android{

// private sealed class RootGraphicsView.Template1 :7
// {
::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* RootGraphicsView__Template1_typeof();
void RootGraphicsView__Template1__ctor_9_fn(RootGraphicsView__Template1* __this, ::g::Fuse::Android::RootGraphicsView* parent);
void RootGraphicsView__Template1__InitializeUX_fn(RootGraphicsView__Template1* __this);
void RootGraphicsView__Template1__New6_fn(::g::Fuse::Android::RootGraphicsView* parent, RootGraphicsView__Template1** __retval);

struct RootGraphicsView__Template1 : ::g::Fuse::Controls::Native::Android::SurfaceView
{
    uWeak< ::g::Fuse::Android::RootGraphicsView*> __parent1;

    void ctor_9(::g::Fuse::Android::RootGraphicsView* parent);
    void InitializeUX();
    static RootGraphicsView__Template1* New6(::g::Fuse::Android::RootGraphicsView* parent);
};
// }

}}} // ::g::Fuse::Android
