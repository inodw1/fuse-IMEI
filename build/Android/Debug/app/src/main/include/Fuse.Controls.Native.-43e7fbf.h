// This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.3.0-rc2/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusChangedListener;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class FocusChangedListener :552
// {
struct FocusChangedListener_type : uType
{
    ::g::Uno::IDisposable interface0;
};

FocusChangedListener_type* FocusChangedListener_typeof();
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle);
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this);
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus);

struct FocusChangedListener : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Java::Object*> _view;

    void Dispose();
    void OnFocusChange(bool hasFocus);
    static void ClearListener(::g::Java::Object* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
