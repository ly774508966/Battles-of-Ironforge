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

// System.Reflection.MonoField
struct MonoField_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.Binder
struct Binder_t1_337;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoField::.ctor()
extern "C" void MonoField__ctor_m1_3105 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C" int32_t MonoField_get_Attributes_m1_3106 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C" RuntimeFieldHandle_t1_36  MonoField_get_FieldHandle_m1_3107 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C" Type_t * MonoField_get_FieldType_m1_3108 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m1_3109 (MonoField_t * __this, bool ___declaring, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m1_3110 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m1_3111 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m1_3112 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoField_IsDefined_m1_3113 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_158* MonoField_GetCustomAttributes_m1_3114 (MonoField_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_158* MonoField_GetCustomAttributes_m1_3115 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C" int32_t MonoField_GetFieldOffset_m1_3116 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m1_3117 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern "C" Object_t * MonoField_GetValue_m1_3118 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoField::ToString()
extern "C" String_t* MonoField_ToString_m1_3119 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m1_3120 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void MonoField_SetValue_m1_3121 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1_337 * ___binder, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoField_GetObjectData_m1_3122 (MonoField_t * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C" void MonoField_CheckGeneric_m1_3123 (MonoField_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
