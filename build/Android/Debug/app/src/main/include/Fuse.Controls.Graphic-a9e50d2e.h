// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.3.0-rc2/.uno/ux13/Fuse.Controls.GraphicsView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-dd7dd49d.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class GraphicsView.Template1 :7
// {
::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* GraphicsView__Template1_typeof();
void GraphicsView__Template1__ctor_9_fn(GraphicsView__Template1* __this, ::g::Fuse::Controls::GraphicsView* parent);
void GraphicsView__Template1__InitializeUX_fn(GraphicsView__Template1* __this);
void GraphicsView__Template1__New6_fn(::g::Fuse::Controls::GraphicsView* parent, GraphicsView__Template1** __retval);

struct GraphicsView__Template1 : ::g::Fuse::Controls::Native::Android::TextureView
{
    uWeak< ::g::Fuse::Controls::GraphicsView*> __parent1;

    void ctor_9(::g::Fuse::Controls::GraphicsView* parent);
    void InitializeUX();
    static GraphicsView__Template1* New6(::g::Fuse::Controls::GraphicsView* parent);
};
// }

}}} // ::g::Fuse::Controls
