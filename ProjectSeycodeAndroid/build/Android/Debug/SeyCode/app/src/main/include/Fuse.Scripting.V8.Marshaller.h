// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.V8/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct UniqueValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ValueVector;}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Object;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Marshaller :167
// {
uClassType* Marshaller_typeof();
void Marshaller__GetArrayBufferData_fn(::g::Fuse::Scripting::V8::Object* o, uArray** __retval);
void Marshaller__NewArrayBuffer_fn(uArray* data, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Marshaller__ToInt_fn(uObject* o, int* __retval);
void Marshaller__Unwrap_fn(uObject* obj, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void Marshaller__UnwrapArray_fn(uArray* objs, ::g::Fuse::Scripting::V8::Simple::ValueVector** __retval);
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Simple::Value* obj, uObject** __retval);
void Marshaller__WrapUniqueValueVector_fn(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec, uArray** __retval);

struct Marshaller : uObject
{
    static uArray* GetArrayBufferData(::g::Fuse::Scripting::V8::Object* o);
    static ::g::Fuse::Scripting::V8::Simple::Value* NewArrayBuffer(uArray* data);
    static int ToInt(uObject* o);
    static ::g::Fuse::Scripting::V8::Simple::Value* Unwrap(uObject* obj);
    static ::g::Fuse::Scripting::V8::Simple::ValueVector* UnwrapArray(uArray* objs);
    static uObject* Wrap(::g::Fuse::Scripting::V8::Simple::Value* obj);
    static uArray* WrapUniqueValueVector(::g::Fuse::Scripting::V8::Simple::UniqueValueVector* vec);
};
// }

}}}} // ::g::Fuse::Scripting::V8
