// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.3.0-rc2/Android/ScrollView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-3800373f.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ScrollView;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ScrollView :13
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IScrollView interface2;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y);

struct ScrollView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong<uObject*> _host;

    void AllowedScrollDirections(int value);
    void OnScrollChanged(int x, int y, int oldx, int oldy);
    void ScrollPosition(::g::Uno::Float2 value);
    static void SetScrollPosition(::g::Java::Object* handle, int x, int y);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
