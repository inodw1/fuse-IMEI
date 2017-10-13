// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.3.0-rc2/.uno/ux13/Fuse.Controls.Button.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Button__Template1;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Button.Template1 :7
// {
::g::Fuse::Controls::Panel_type* Button__Template1_typeof();
void Button__Template1__ctor_7_fn(Button__Template1* __this, ::g::Fuse::Controls::Button* parent);
void Button__Template1__InitializeUX_fn(Button__Template1* __this);
void Button__Template1__New4_fn(::g::Fuse::Controls::Button* parent, Button__Template1** __retval);

struct Button__Template1 : ::g::Fuse::Controls::Panel
{
    uWeak< ::g::Fuse::Controls::Button*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Button__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Button__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Button__Template1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Button__Template1_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Button__Template1_typeof()->Init(), __selector4_; }
    uStrong< ::g::Fuse::Controls::Text*> Button_Text;
    uStrong< ::g::Uno::UX::Property1*> Button_Text_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> Button_Text_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> Button_Text_Value_inst;

    void ctor_7(::g::Fuse::Controls::Button* parent);
    void InitializeUX();
    static Button__Template1* New4(::g::Fuse::Controls::Button* parent);
};
// }

}}} // ::g::Fuse::Controls
