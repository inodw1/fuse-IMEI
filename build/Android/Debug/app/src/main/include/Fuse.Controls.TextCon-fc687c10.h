// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.3.0-rc2/.uno/ux13/Fuse.Controls.TextControl.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-9abb3393.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class TextControl.Template1 :7
// {
::g::Fuse::Controls::Native::Android::TextView_type* TextControl__Template1_typeof();
void TextControl__Template1__ctor_11_fn(TextControl__Template1* __this, ::g::Fuse::Controls::TextControl* parent);
void TextControl__Template1__InitializeUX_fn(TextControl__Template1* __this);
void TextControl__Template1__New7_fn(::g::Fuse::Controls::TextControl* parent, TextControl__Template1** __retval);

struct TextControl__Template1 : ::g::Fuse::Controls::Native::Android::TextView
{
    uWeak< ::g::Fuse::Controls::TextControl*> __parent1;

    void ctor_11(::g::Fuse::Controls::TextControl* parent);
    void InitializeUX();
    static TextControl__Template1* New7(::g::Fuse::Controls::TextControl* parent);
};
// }

}}} // ::g::Fuse::Controls
