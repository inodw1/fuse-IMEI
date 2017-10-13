// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.3.0-rc2/.uno/ux13/Fuse.Controls.Button.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-ada75d53.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Button__Template3;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Button.Template3 :101
// {
uType* Button__Template3_typeof();
void Button__Template3__ctor_1_fn(Button__Template3* __this, ::g::Fuse::Controls::Button* parent);
void Button__Template3__InitializeUX_fn(Button__Template3* __this);
void Button__Template3__New2_fn(::g::Fuse::Controls::Button* parent, Button__Template3** __retval);

struct Button__Template3 : ::g::Fuse::Controls::Native::iOS::Button
{
    uWeak< ::g::Fuse::Controls::Button*> __parent1;

    void ctor_1(::g::Fuse::Controls::Button* parent);
    void InitializeUX();
    static Button__Template3* New2(::g::Fuse::Controls::Button* parent);
};
// }

}}} // ::g::Fuse::Controls
