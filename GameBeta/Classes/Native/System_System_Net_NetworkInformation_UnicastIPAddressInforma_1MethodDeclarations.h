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

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct UnicastIPAddressInformationImplCollection_t3_457;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t3_456;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_950;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::.ctor(System.Boolean)
extern "C" void UnicastIPAddressInformationImplCollection__ctor_m3_3169 (UnicastIPAddressInformationImplCollection_t3_457 * __this, bool ___isReadOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::.cctor()
extern "C" void UnicastIPAddressInformationImplCollection__cctor_m3_3170 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::get_IsReadOnly()
extern "C" bool UnicastIPAddressInformationImplCollection_get_IsReadOnly_m3_3171 (UnicastIPAddressInformationImplCollection_t3_457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::Win32FromUnicast(System.Int32,System.IntPtr)
extern "C" UnicastIPAddressInformationCollection_t3_456 * UnicastIPAddressInformationImplCollection_Win32FromUnicast_m3_3172 (Object_t * __this /* static, unused */, int32_t ___ifIndex, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::LinuxFromList(System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" UnicastIPAddressInformationCollection_t3_456 * UnicastIPAddressInformationImplCollection_LinuxFromList_m3_3173 (Object_t * __this /* static, unused */, List_1_t1_950 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;