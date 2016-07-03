﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.MonoSyncFileStream/WriteDelegate
struct WriteDelegate_t3_283;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void System.IO.MonoSyncFileStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate__ctor_m3_2177 (WriteDelegate_t3_283 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteDelegate_Invoke_m3_2178 (WriteDelegate_t3_283 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t3_283(Il2CppObject* delegate, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.MonoSyncFileStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_BeginInvoke_m3_2179 (WriteDelegate_t3_283 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_EndInvoke_m3_2180 (WriteDelegate_t3_283 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
