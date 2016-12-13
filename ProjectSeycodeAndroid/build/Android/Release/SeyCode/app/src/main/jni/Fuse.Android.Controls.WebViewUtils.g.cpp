// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand.h>
#include <Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager.h>
#include <Fuse.Android.Controls.WebViewUtils.WebViewForeign.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{
namespace WebViewUtils{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.32.14/Android/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class EvaluateJsCommand :14
// {
static void EvaluateJsCommand_build(uType* type)
{
    ::STRINGS[0] = uString::Const("javascript:");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand, _handler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand, JavaScript), 0);
}

uType* EvaluateJsCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EvaluateJsCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand", options);
    type->fp_build_ = EvaluateJsCommand_build;
    return type;
}

// public EvaluateJsCommand(string javaScript, Uno.Action<string> handler) :19
void EvaluateJsCommand__ctor__fn(EvaluateJsCommand* __this, uString* javaScript, uDelegate* handler)
{
    __this->ctor_(javaScript, handler);
}

// public void Execute(Java.Object webViewHandle, string expression) :25
void EvaluateJsCommand__Execute_fn(EvaluateJsCommand* __this, ::g::Java::Object* webViewHandle, uString* expression)
{
    __this->Execute(webViewHandle, expression);
}

// public void HandleResult(string result) :30
void EvaluateJsCommand__HandleResult_fn(EvaluateJsCommand* __this, uString* result)
{
    __this->HandleResult(result);
}

// public EvaluateJsCommand New(string javaScript, Uno.Action<string> handler) :19
void EvaluateJsCommand__New1_fn(uString* javaScript, uDelegate* handler, EvaluateJsCommand** __retval)
{
    *__retval = EvaluateJsCommand::New1(javaScript, handler);
}

// public EvaluateJsCommand(string javaScript, Uno.Action<string> handler) [instance] :19
void EvaluateJsCommand::ctor_(uString* javaScript, uDelegate* handler)
{
    JavaScript = javaScript;
    _handler = handler;
}

// public void Execute(Java.Object webViewHandle, string expression) [instance] :25
void EvaluateJsCommand::Execute(::g::Java::Object* webViewHandle, uString* expression)
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadUrl(webViewHandle, ::g::Uno::String::op_Addition2(::STRINGS[0/*"javascript:"*/], expression));
}

// public void HandleResult(string result) [instance] :30
void EvaluateJsCommand::HandleResult(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(_handler, NULL))
        uPtr(_handler)->InvokeVoid(result);
}

// public EvaluateJsCommand New(string javaScript, Uno.Action<string> handler) [static] :19
EvaluateJsCommand* EvaluateJsCommand::New1(uString* javaScript, uDelegate* handler)
{
    EvaluateJsCommand* obj1 = (EvaluateJsCommand*)uNew(EvaluateJsCommand_typeof());
    obj1->ctor_(javaScript, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.32.14/Android/$.uno
// -------------------------------------------------------------------------

// public sealed extern class JSEvalRequestManager :36
// {
static void JSEvalRequestManager_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJSInterface");
    ::STRINGS[2] = uString::Const(".onResult( eval('");
    ::STRINGS[3] = uString::Const("') );");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof());
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager, _currentRequest), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof()), offsetof(::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager, _evaluateRequests), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager, _interfaceName), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager, _webViewHandle), 0);
}

uType* JSEvalRequestManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(JSEvalRequestManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager", options);
    type->fp_build_ = JSEvalRequestManager_build;
    return type;
}

// public JSEvalRequestManager(Java.Object webViewHandle) :42
void JSEvalRequestManager__ctor__fn(JSEvalRequestManager* __this, ::g::Java::Object* webViewHandle)
{
    __this->ctor_(webViewHandle);
}

// private string CreateExpression(string original) :64
void JSEvalRequestManager__CreateExpression_fn(JSEvalRequestManager* __this, uString* original, uString** __retval)
{
    *__retval = __this->CreateExpression(original);
}

// public void EvaluateJs(string js, Uno.Action<string> handler) :48
void JSEvalRequestManager__EvaluateJs_fn(JSEvalRequestManager* __this, uString* js, uDelegate* handler)
{
    __this->EvaluateJs(js, handler);
}

// public JSEvalRequestManager New(Java.Object webViewHandle) :42
void JSEvalRequestManager__New1_fn(::g::Java::Object* webViewHandle, JSEvalRequestManager** __retval)
{
    *__retval = JSEvalRequestManager::New1(webViewHandle);
}

// private void NextRequest() :56
void JSEvalRequestManager__NextRequest_fn(JSEvalRequestManager* __this)
{
    __this->NextRequest();
}

// private void OnJsResult(string result) :68
void JSEvalRequestManager__OnJsResult_fn(JSEvalRequestManager* __this, uString* result)
{
    __this->OnJsResult(result);
}

// public JSEvalRequestManager(Java.Object webViewHandle) [instance] :42
void JSEvalRequestManager::ctor_(::g::Java::Object* webViewHandle)
{
    _evaluateRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand>*/]));
    _webViewHandle = webViewHandle;
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::AddJavascriptInterface(_webViewHandle, _interfaceName = ::STRINGS[1/*"FuseJSInter...*/], uDelegate::New(::TYPES[2/*Uno.Action<string>*/], (void*)JSEvalRequestManager__OnJsResult_fn, this));
}

// private string CreateExpression(string original) [instance] :64
uString* JSEvalRequestManager::CreateExpression(uString* original)
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(_interfaceName, ::STRINGS[2/*".onResult( ...*/]), original), ::STRINGS[3/*"') );"*/]);
}

// public void EvaluateJs(string js, Uno.Action<string> handler) [instance] :48
void JSEvalRequestManager::EvaluateJs(uString* js, uDelegate* handler)
{
    ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand* cmd = ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand::New1(js, handler);
    ::g::Uno::Collections::List__Add_fn(uPtr(_evaluateRequests), cmd);

    if (uPtr(_evaluateRequests)->Count() == 1)
        NextRequest();
}

// private void NextRequest() [instance] :56
void JSEvalRequestManager::NextRequest()
{
    ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand* ret2;

    if (uPtr(_evaluateRequests)->Count() == 0)
        return;

    _currentRequest = (::g::Uno::Collections::List__get_Item_fn(uPtr(_evaluateRequests), uCRef<int>(0), &ret2), ret2);
    uPtr(_evaluateRequests)->RemoveAt(0);
    uPtr(_currentRequest)->Execute(_webViewHandle, CreateExpression(uPtr(_currentRequest)->JavaScript));
}

// private void OnJsResult(string result) [instance] :68
void JSEvalRequestManager::OnJsResult(uString* result)
{
    uPtr(_currentRequest)->HandleResult(result);
    _currentRequest = NULL;
    NextRequest();
}

// public JSEvalRequestManager New(Java.Object webViewHandle) [static] :42
JSEvalRequestManager* JSEvalRequestManager::New1(::g::Java::Object* webViewHandle)
{
    JSEvalRequestManager* obj1 = (JSEvalRequestManager*)uNew(JSEvalRequestManager_typeof());
    obj1->ctor_(webViewHandle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.32.14/Android/$.uno
// -------------------------------------------------------------------------

// public static class WebViewForeign :288
// {
static void WebViewForeign_build(uType* type)
{
}

uClassType* WebViewForeign_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.WebViewForeign", options);
    type->fp_build_ = WebViewForeign_build;
    return type;
}

// public static extern void AddJavascriptInterface(Java.Object handle, string name, Uno.Action<string> resultHandler) :300
void WebViewForeign__AddJavascriptInterface_fn(::g::Java::Object* handle, uString* name, uDelegate* resultHandler)
{
    WebViewForeign::AddJavascriptInterface(handle, name, resultHandler);
}

// public static extern bool CanGoBack(Java.Object handle) :338
void WebViewForeign__CanGoBack_fn(::g::Java::Object* handle, bool* __retval)
{
    *__retval = WebViewForeign::CanGoBack(handle);
}

// public static extern bool CanGoForward(Java.Object handle) :345
void WebViewForeign__CanGoForward_fn(::g::Java::Object* handle, bool* __retval)
{
    *__retval = WebViewForeign::CanGoForward(handle);
}

// public static extern Java.Object CreateAndSetWebChromeClient(Java.Object webViewHandle, Uno.Action<int> onProgress) :308
void WebViewForeign__CreateAndSetWebChromeClient_fn(::g::Java::Object* webViewHandle, uDelegate* onProgress, ::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateAndSetWebChromeClient(webViewHandle, onProgress);
}

// public static extern Java.Object CreateAndSetWebViewClient(Java.Object webViewHandle, Uno.Action loaded, Uno.Action started, Uno.Action changed) :316
void WebViewForeign__CreateAndSetWebViewClient_fn(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed, ::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateAndSetWebViewClient(webViewHandle, loaded, started, changed);
}

// public static extern Java.Object CreateWebView() :291
void WebViewForeign__CreateWebView_fn(::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateWebView();
}

// public static extern double GetProgress(Java.Object handle) :394
void WebViewForeign__GetProgress_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = WebViewForeign::GetProgress(handle);
}

// public static extern string GetUrl(Java.Object handle) :324
void WebViewForeign__GetUrl_fn(::g::Java::Object* handle, uString** __retval)
{
    *__retval = WebViewForeign::GetUrl(handle);
}

// public static extern void GoBack(Java.Object handle) :352
void WebViewForeign__GoBack_fn(::g::Java::Object* handle)
{
    WebViewForeign::GoBack(handle);
}

// public static extern void GoForward(Java.Object handle) :359
void WebViewForeign__GoForward_fn(::g::Java::Object* handle)
{
    WebViewForeign::GoForward(handle);
}

// public static extern void LoadHtml(Java.Object handle, string html, string baseUrl) :380
void WebViewForeign__LoadHtml_fn(::g::Java::Object* handle, uString* html, uString* baseUrl)
{
    WebViewForeign::LoadHtml(handle, html, baseUrl);
}

// public static extern void LoadUrl(Java.Object handle, string url) :387
void WebViewForeign__LoadUrl_fn(::g::Java::Object* handle, uString* url)
{
    WebViewForeign::LoadUrl(handle, url);
}

// public static extern void Reload(Java.Object handle) :366
void WebViewForeign__Reload_fn(::g::Java::Object* handle)
{
    WebViewForeign::Reload(handle);
}

// public static extern void StopLoading(Java.Object handle) :373
void WebViewForeign__StopLoading_fn(::g::Java::Object* handle)
{
    WebViewForeign::StopLoading(handle);
}

// public static extern void AddJavascriptInterface(Java.Object handle, string name, Uno.Action<string> resultHandler) [static] :300
void WebViewForeign::AddJavascriptInterface(::g::Java::Object* handle, uString* name, uDelegate* resultHandler)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddJavascriptInterface178", "(Ljava/lang/Object;Ljava/lang/String;Lcom/foreign/Uno/Action_String;)V");
        jstring _name = JniHelper::UnoToJavaString(name);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_name,::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)resultHandler, "com.foreign.Uno.Action_String"));
        
        if (_name!=NULL) { _jni->DeleteLocalRef(_name); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern bool CanGoBack(Java.Object handle) [static] :338
bool WebViewForeign::CanGoBack(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CanGoBack179", "(Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern bool CanGoForward(Java.Object handle) [static] :345
bool WebViewForeign::CanGoForward(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CanGoForward180", "(Ljava/lang/Object;)Z");
        jboolean __jresult = _jni->CallStaticBooleanMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern Java.Object CreateAndSetWebChromeClient(Java.Object webViewHandle, Uno.Action<int> onProgress) [static] :308
::g::Java::Object* WebViewForeign::CreateAndSetWebChromeClient(::g::Java::Object* webViewHandle, uDelegate* onProgress)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateAndSetWebChromeClient181", "(Ljava/lang/Object;Lcom/foreign/Uno/Action_int;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(webViewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)webViewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)onProgress, "com.foreign.Uno.Action_int"));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static extern Java.Object CreateAndSetWebViewClient(Java.Object webViewHandle, Uno.Action loaded, Uno.Action started, Uno.Action changed) [static] :316
::g::Java::Object* WebViewForeign::CreateAndSetWebViewClient(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateAndSetWebViewClient182", "(Ljava/lang/Object;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(webViewHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)webViewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)loaded, "com.foreign.Uno.Action"),::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)started, "com.foreign.Uno.Action"),::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)changed, "com.foreign.Uno.Action"));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static extern Java.Object CreateWebView() [static] :291
::g::Java::Object* WebViewForeign::CreateWebView()
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateWebView183", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static extern double GetProgress(Java.Object handle) [static] :394
double WebViewForeign::GetProgress(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetProgress184", "(Ljava/lang/Object;)D");
        jdouble __jresult = _jni->CallStaticDoubleMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double __result = (double)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern string GetUrl(Java.Object handle) [static] :324
uString* WebViewForeign::GetUrl(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUrl186", "(Ljava/lang/Object;)Ljava/lang/String;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_jni->GetObjectRefType(__jresult) == JNILocalRefType) _jni->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern void GoBack(Java.Object handle) [static] :352
void WebViewForeign::GoBack(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GoBack187", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void GoForward(Java.Object handle) [static] :359
void WebViewForeign::GoForward(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GoForward188", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoadHtml(Java.Object handle, string html, string baseUrl) [static] :380
void WebViewForeign::LoadHtml(::g::Java::Object* handle, uString* html, uString* baseUrl)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadHtml189", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V");
        jstring _html = JniHelper::UnoToJavaString(html);
        jstring _baseUrl = JniHelper::UnoToJavaString(baseUrl);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_html,_baseUrl);
        
        if (_html!=NULL) { _jni->DeleteLocalRef(_html); }
        if (_baseUrl!=NULL) { _jni->DeleteLocalRef(_baseUrl); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoadUrl(Java.Object handle, string url) [static] :387
void WebViewForeign::LoadUrl(::g::Java::Object* handle, uString* url)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadUrl190", "(Ljava/lang/Object;Ljava/lang/String;)V");
        jstring _url = JniHelper::UnoToJavaString(url);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_url);
        
        if (_url!=NULL) { _jni->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void Reload(Java.Object handle) [static] :366
void WebViewForeign::Reload(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Reload191", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void StopLoading(Java.Object handle) [static] :373
void WebViewForeign::StopLoading(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StopLoading192", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Android::Controls::WebViewUtils
