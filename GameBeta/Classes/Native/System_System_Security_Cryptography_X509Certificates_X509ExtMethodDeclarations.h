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

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t3_668;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3_661;
// System.Security.Cryptography.Oid
struct Oid_t3_662;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m3_5620 (X509Extension_t3_668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509Extension__ctor_m3_5621 (X509Extension_t3_668 * __this, AsnEncodedData_t3_661 * ___encodedExtension, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.Security.Cryptography.Oid,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m3_5622 (X509Extension_t3_668 * __this, Oid_t3_662 * ___oid, ByteU5BU5D_t1_72* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m3_5623 (X509Extension_t3_668 * __this, String_t* ___oid, ByteU5BU5D_t1_72* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m3_5624 (X509Extension_t3_668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m3_5625 (X509Extension_t3_668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m3_5626 (X509Extension_t3_668 * __this, AsnEncodedData_t3_661 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m3_5627 (X509Extension_t3_668 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
