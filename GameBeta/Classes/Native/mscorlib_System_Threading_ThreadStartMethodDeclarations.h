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

// System.Threading.ThreadStart
struct ThreadStart_t1_829;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadStart__ctor_m1_5971 (ThreadStart_t1_829 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
extern "C" void ThreadStart_Invoke_m1_5972 (ThreadStart_t1_829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t1_829(Il2CppObject* delegate);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadStart_BeginInvoke_m1_5973 (ThreadStart_t1_829 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ThreadStart_EndInvoke_m1_5974 (ThreadStart_t1_829 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
