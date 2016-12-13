// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.V8/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Context;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ExternalFreer;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct MessageHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptException;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ScriptExceptionHandler;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// public sealed extern class Context :60
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* ownerThread);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__New1_fn(uObject* ownerThread, Context** __retval);
void Context__OnRuntimeException_fn(uString* message);
void Context__OnScriptException_fn(::g::Fuse::Scripting::V8::Simple::ScriptException* e);

struct Context : ::g::Fuse::Scripting::Context
{
    static uSStrong< ::g::Uno::Exception*> _cachedException_;
    static uSStrong< ::g::Uno::Exception*>& _cachedException() { return Context_typeof()->Init(), _cachedException_; }
    uStrong< ::g::Fuse::Scripting::V8::Simple::Context*> _context;
    uStrong< ::g::Fuse::Scripting::V8::Simple::ExternalFreer*> _externalFreer;
    uStrong< ::g::Fuse::Scripting::V8::Simple::MessageHandler*> _runtimeExceptionHandler;
    uStrong< ::g::Fuse::Scripting::V8::Simple::ScriptExceptionHandler*> _scriptExceptionHandler;

    void ctor_1(uObject* ownerThread);
    static Context* New1(uObject* ownerThread);
    static void OnRuntimeException(uString* message);
    static void OnScriptException(::g::Fuse::Scripting::V8::Simple::ScriptException* e);
};
// }

}}}} // ::g::Fuse::Scripting::V8
