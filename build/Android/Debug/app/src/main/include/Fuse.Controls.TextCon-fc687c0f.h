// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.3.0-rc2/.uno/ux13/Fuse.Controls.TextControl.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-c20be635.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl__Template2;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class TextControl.Template2 :37
// {
uType* TextControl__Template2_typeof();
void TextControl__Template2__ctor_1_fn(TextControl__Template2* __this, ::g::Fuse::Controls::TextControl* parent);
void TextControl__Template2__InitializeUX_fn(TextControl__Template2* __this);
void TextControl__Template2__New2_fn(::g::Fuse::Controls::TextControl* parent, TextControl__Template2** __retval);

struct TextControl__Template2 : ::g::Fuse::Controls::Native::iOS::TextView
{
    uWeak< ::g::Fuse::Controls::TextControl*> __parent1;

    void ctor_1(::g::Fuse::Controls::TextControl* parent);
    void InitializeUX();
    static TextControl__Template2* New2(::g::Fuse::Controls::TextControl* parent);
};
// }

}}} // ::g::Fuse::Controls
