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

// System.Net.ServicePointManager/SPKey
struct SPKey_t3_610;
// System.Uri
struct Uri_t3_3;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
extern "C" void SPKey__ctor_m3_4839 (SPKey_t3_610 * __this, Uri_t3_3 * ___uri, bool ___use_connect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePointManager/SPKey::get_Uri()
extern "C" Uri_t3_3 * SPKey_get_Uri_m3_4840 (SPKey_t3_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::get_UseConnect()
extern "C" bool SPKey_get_UseConnect_m3_4841 (SPKey_t3_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
extern "C" int32_t SPKey_GetHashCode_m3_4842 (SPKey_t3_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
extern "C" bool SPKey_Equals_m3_4843 (SPKey_t3_610 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
