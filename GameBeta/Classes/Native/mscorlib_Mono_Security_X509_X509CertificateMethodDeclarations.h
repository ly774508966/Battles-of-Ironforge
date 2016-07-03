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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1_127;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.DSA
struct DSA_t1_107;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1_122;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m1_1416 (X509Certificate_t1_127 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m1_1417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m1_1418 (X509Certificate_t1_127 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_72* X509Certificate_GetUnsignedBigInteger_m1_1419 (X509Certificate_t1_127 * __this, ByteU5BU5D_t1_72* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t1_107 * X509Certificate_get_DSA_m1_1420 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m1_1421 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t1_72* X509Certificate_get_KeyAlgorithmParameters_m1_1422 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t1_72* X509Certificate_get_PublicKey_m1_1423 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t1_72* X509Certificate_get_RawData_m1_1424 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m1_1425 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t1_128  X509Certificate_get_ValidFrom_m1_1426 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t1_128  X509Certificate_get_ValidUntil_m1_1427 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1_122 * X509Certificate_GetIssuerName_m1_1428 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1_122 * X509Certificate_GetSubjectName_m1_1429 (X509Certificate_t1_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m1_1430 (X509Certificate_t1_127 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t1_72* X509Certificate_PEM_m1_1431 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
