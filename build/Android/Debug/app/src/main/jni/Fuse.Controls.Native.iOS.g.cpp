// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.-144a8301.h>
#include <Fuse.Controls.Native.-ada75d53.h>
#include <Fuse.Controls.Native.-c20be635.h>
#include <Fuse.Visual.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// C:\Users\Inod\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.3.0-rc2\iOS\Button.uno
// --------------------------------------------------------------------------------------------

// public extern class Button :6
// {
static void Button_build(uType* type)
{
}

uType* Button_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.Button", options);
    type->fp_build_ = Button_build;
    return type;
}

// public Button() :8
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public Button() [instance] :8
void Button::ctor_()
{
}
// }

// C:\Users\Inod\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.3.0-rc2\iOS\GraphicsView.uno
// --------------------------------------------------------------------------------------------------

// public extern class GraphicsView :7
// {
static void GraphicsView_build(uType* type)
{
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host) :10
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView(Fuse.Visual host) [instance] :10
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}
// }

// C:\Users\Inod\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\1.3.0-rc2\iOS\TextView.uno
// ----------------------------------------------------------------------------------------------

// public extern class TextView :6
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    return type;
}

// public generated TextView() :6
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView() [instance] :6
void TextView::ctor_()
{
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
