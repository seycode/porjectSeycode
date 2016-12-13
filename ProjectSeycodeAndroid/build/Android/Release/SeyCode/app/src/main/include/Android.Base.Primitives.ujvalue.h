// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Targets/Android/Uno/Base/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// public extern struct ujvalue :2227
// {
uStructType* ujvalue_typeof();
void ujvalue__op_Implicit7_fn(jlong* v, jvalue* __retval);
void ujvalue__op_Implicit17_fn(int64_t* v, jvalue* __retval);

struct ujvalue
{
    static jvalue op_Implicit7(jlong v);
    static jvalue op_Implicit17(int64_t v);
};
// }

}}}} // ::g::Android::Base::Primitives
