// This file was generated based on '.uno/ux13/CallHistory.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CallHistory_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class CallHistory_FuseControlsTextControl_Value_Property :1
// {
::g::Uno::UX::Property1_type* CallHistory_FuseControlsTextControl_Value_Property_typeof();
void CallHistory_FuseControlsTextControl_Value_Property__ctor_3_fn(CallHistory_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void CallHistory_FuseControlsTextControl_Value_Property__Get1_fn(CallHistory_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void CallHistory_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, CallHistory_FuseControlsTextControl_Value_Property** __retval);
void CallHistory_FuseControlsTextControl_Value_Property__get_Object_fn(CallHistory_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void CallHistory_FuseControlsTextControl_Value_Property__Set1_fn(CallHistory_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void CallHistory_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(CallHistory_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct CallHistory_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static CallHistory_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
