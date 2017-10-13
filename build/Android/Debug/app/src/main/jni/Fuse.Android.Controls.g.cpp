// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls-3a7bea61.h>
#include <Fuse.Android.Controls-b7abe437.h>
#include <Fuse.Controls.URISche-2ed3a615.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Navigation.Histo-b65f239b.h>
#include <Java.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[2];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// C:\Users\Inod\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\1.3.0-rc2\Android\WebView.uno
// --------------------------------------------------------------------------------------------------

// public sealed extern class WebView :14
// {
static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    ::TYPES[4] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[7] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface5));
    type->SetFields(6,
        ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager_typeof(), offsetof(WebView, _evalRequestMgr), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(WebView, _file), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _source), 0,
        ::g::Uno::String_typeof()->Array(), offsetof(WebView, _uriSchemes), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webChromeClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webViewClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webViewHandle), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(WebView, _webViewHost), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _BaseUrl), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ScrollEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ZoomEnabled), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, BeginLoading1), 0,
        ::TYPES[6/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(WebView, HistoryChanged1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, PageLoaded1), 0,
        ::TYPES[7/*Uno.UX.ValueChangedHandler<double>*/], offsetof(WebView, ProgressChanged1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, URISchemeHandler1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(WebView, UrlChanged1), 0);
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->fp_build_ = WebView_build;
    type->interface2.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface2.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface2.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface2.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface2.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface2.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface2.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface2.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface2.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface2.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface2.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface2.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface2.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface2.fp_get_ZoomEnabled = (void(*)(uObject*, bool*))WebView__get_ZoomEnabled_fn;
    type->interface2.fp_set_ZoomEnabled = (void(*)(uObject*, bool*))WebView__set_ZoomEnabled_fn;
    type->interface2.fp_get_ScrollEnabled = (void(*)(uObject*, bool*))WebView__get_ScrollEnabled_fn;
    type->interface2.fp_set_ScrollEnabled = (void(*)(uObject*, bool*))WebView__set_ScrollEnabled_fn;
    type->interface2.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface2.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface2.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface2.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface2.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface2.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface2.fp_add_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__add_URISchemeHandler_fn;
    type->interface2.fp_remove_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__remove_URISchemeHandler_fn;
    type->interface3.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface3.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface3.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface5.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) :38
void WebView__ctor_9_fn(WebView* __this, ::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    __this->ctor_9(host, handle, schemes);
}

// public generated string get_BaseUrl() :107
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :107
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :23
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :23
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :129
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :134
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes) :32
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost, schemes);
}

// public void Eval(string js) :102
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :97
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :205
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :206
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :137
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :142
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :157
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :157
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :214
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :167
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :172
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :181
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public bool MatchedURISchemeHandler(string url) :57
void WebView__MatchedURISchemeHandler_fn(WebView* __this, uString* url, bool* __retval)
{
    *__retval = __this->MatchedURISchemeHandler(url);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) :38
void WebView__New5_fn(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::New5(host, handle, schemes);
}

// private void OnBeginLoading() :85
void WebView__OnBeginLoading_fn(WebView* __this)
{
    __this->OnBeginLoading();
}

// private void OnCustomURI(string url) :73
void WebView__OnCustomURI_fn(WebView* __this, uString* url)
{
    __this->OnCustomURI(url);
}

// private void OnHistoryChanged() :159
void WebView__OnHistoryChanged_fn(WebView* __this)
{
    __this->OnHistoryChanged();
}

// private void OnPageLoaded() :79
void WebView__OnPageLoaded_fn(WebView* __this)
{
    __this->OnPageLoaded();
}

// private void OnProgressChanged(int newProgress) :191
void WebView__OnProgressChanged_fn(WebView* __this, int* newProgress)
{
    __this->OnProgressChanged(*newProgress);
}

// private void OnUrlChanged() :91
void WebView__OnUrlChanged_fn(WebView* __this)
{
    __this->OnUrlChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :25
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :25
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :199
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :22
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :22
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :147
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public generated bool get_ScrollEnabled() :227
void WebView__get_ScrollEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public generated void set_ScrollEnabled(bool value) :227
void WebView__set_ScrollEnabled_fn(WebView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public string get_Source() :112
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :113
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :152
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public generated void add_URISchemeHandler(Uno.EventHandler value) :26
void WebView__add_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->add_URISchemeHandler(value);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value) :26
void WebView__remove_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->remove_URISchemeHandler(value);
}

// public string get_Url() :118
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :119
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :24
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :24
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated bool get_ZoomEnabled() :226
void WebView__get_ZoomEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ZoomEnabled();
}

// public generated void set_ZoomEnabled(bool value) :226
void WebView__set_ZoomEnabled_fn(WebView* __this, bool* value)
{
    __this->ZoomEnabled(*value);
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) [instance] :38
void WebView::ctor_9(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    ctor_7(handle);
    _webViewHost = host;
    _webViewHandle = handle;
    _evalRequestMgr = ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager::New1(_webViewHandle);
    _webChromeClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebChromeClient(_webViewHandle, uDelegate::New(::TYPES[0/*Uno.Action<int>*/], (void*)WebView__OnProgressChanged_fn, this));
    _webViewClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebViewClient(_webViewHandle, uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnPageLoaded_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnBeginLoading_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)WebView__OnUrlChanged_fn, this), uDelegate::New(::TYPES[2/*Uno.Func<string, bool>*/], (void*)WebView__MatchedURISchemeHandler_fn, this));
    _uriSchemes = schemes;
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :107
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :107
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :23
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :23
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :129
bool WebView::CanGoBack()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoBack(_webViewHandle);
}

// public bool get_CanGoForward() [instance] :134
bool WebView::CanGoForward()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoForward(_webViewHandle);
}

// public void Eval(string js) [instance] :102
void WebView::Eval(uString* js)
{
    uPtr(_evalRequestMgr)->EvaluateJs(js, NULL);
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :97
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uPtr(_evalRequestMgr)->EvaluateJs(js, resultHandler);
}

// public Uno.UX.FileSource get_File() [instance] :205
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :206
void WebView::File(::g::Uno::UX::FileSource* value)
{
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :137
void WebView::GoBack()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoBack(_webViewHandle);
}

// public void GoForward() [instance] :142
void WebView::GoForward()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoForward(_webViewHandle);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :157
void WebView::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[6/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :157
void WebView::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[6/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :214
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHtml(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :167
void WebView::LoadHtml(uString* html)
{
    LoadHtml1(html, NULL);
}

// public void LoadHtml(string html, string baseUrl) [instance] :172
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uString* ind4;

    if (::g::Uno::String::op_Equality(html, NULL) || ::g::Uno::String::op_Equality(html, ::STRINGS[0/*""*/]))
        return;

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadHtml(_webViewHandle, html, (ind4 = (baseUrl != NULL) ? baseUrl : (uString*)BaseUrl(), (ind4 != NULL) ? ind4 : ::STRINGS[0/*""*/]));
    OnHistoryChanged();
}

// public void LoadUrl(string url) [instance] :181
void WebView::LoadUrl(uString* url)
{
    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    if (MatchedURISchemeHandler(url))
        return;

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadUrl(_webViewHandle, url);
    OnHistoryChanged();
}

// public bool MatchedURISchemeHandler(string url) [instance] :57
bool WebView::MatchedURISchemeHandler(uString* url)
{
    uArray* array1;
    int index2;
    int length3;

    if (::g::Uno::Delegate::op_Inequality(URISchemeHandler1, NULL))
    {
        return true;

        for (array1 = _uriSchemes, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            uString* uri = uPtr(array1)->Strong<uString*>(index2);

            if (::g::Uno::String::IndexOf1(uPtr(url), uri, 0) == 0)
            {
                OnCustomURI(url);
                return true;
            }
        }
    }

    return false;
}

// private void OnBeginLoading() [instance] :85
void WebView::OnBeginLoading()
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnCustomURI(string url) [instance] :73
void WebView::OnCustomURI(uString* url)
{
    if (::g::Uno::Delegate::op_Inequality(URISchemeHandler1, NULL))
        uPtr(URISchemeHandler1)->Invoke(2, this, (::g::Fuse::Controls::URISchemeEventArgs*)::g::Fuse::Controls::URISchemeEventArgs::New2(url));
}

// private void OnHistoryChanged() [instance] :159
void WebView::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(_webViewHost);
}

// private void OnPageLoaded() [instance] :79
void WebView::OnPageLoaded()
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnProgressChanged(int newProgress) [instance] :191
void WebView::OnProgressChanged(int newProgress)
{
    ::g::Uno::UX::ValueChangedArgs* ret6;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[4/*Uno.UX.ValueChangedArgs<double>*/], uCRef((double)newProgress / 100.0), &ret6), ret6));
}

// private void OnUrlChanged() [instance] :91
void WebView::OnUrlChanged()
{
    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :25
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :25
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :199
double WebView::Progress()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetProgress(_webViewHandle) / 100.0;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :22
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[7/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :22
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[7/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :147
void WebView::Reload()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::Reload(_webViewHandle);
}

// public generated bool get_ScrollEnabled() [instance] :227
bool WebView::ScrollEnabled()
{
    return _ScrollEnabled;
}

// public generated void set_ScrollEnabled(bool value) [instance] :227
void WebView::ScrollEnabled(bool value)
{
    _ScrollEnabled = value;
}

// public string get_Source() [instance] :112
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance] :113
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// public void Stop() [instance] :152
void WebView::Stop()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::StopLoading(_webViewHandle);
}

// public generated void add_URISchemeHandler(Uno.EventHandler value) [instance] :26
void WebView::add_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(URISchemeHandler1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value) [instance] :26
void WebView::remove_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(URISchemeHandler1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public string get_Url() [instance] :118
uString* WebView::Url()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetUrl(_webViewHandle);
}

// public void set_Url(string value) [instance] :119
void WebView::Url(uString* value)
{
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :24
void WebView::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :24
void WebView::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated bool get_ZoomEnabled() [instance] :226
bool WebView::ZoomEnabled()
{
    return _ZoomEnabled;
}

// public generated void set_ZoomEnabled(bool value) [instance] :226
void WebView::ZoomEnabled(bool value)
{
    _ZoomEnabled = value;
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes) [static] :32
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes)
{
    ::g::Java::Object* handle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateWebView(uPtr(webViewHost)->ZoomEnabled(), uPtr(webViewHost)->ScrollEnabled());
    return WebView::New5(webViewHost, handle, schemes);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) [static] :38
WebView* WebView::New5(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    WebView* obj5 = (WebView*)uNew(WebView_typeof());
    obj5->ctor_9(host, handle, schemes);
    return obj5;
}
// }

}}}} // ::g::Fuse::Android::Controls
