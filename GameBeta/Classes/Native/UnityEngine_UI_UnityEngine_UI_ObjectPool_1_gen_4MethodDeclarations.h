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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m7_1649(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t7_215 *, UnityAction_1_t5_412 *, UnityAction_1_t5_412 *, const MethodInfo*))ObjectPool_1__ctor_m7_1527_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m7_1650(__this, method) (( int32_t (*) (ObjectPool_1_t7_215 *, const MethodInfo*))ObjectPool_1_get_countAll_m7_1529_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m7_1651(__this, ___value, method) (( void (*) (ObjectPool_1_t7_215 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m7_1531_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m7_1652(__this, method) (( int32_t (*) (ObjectPool_1_t7_215 *, const MethodInfo*))ObjectPool_1_get_countActive_m7_1533_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m7_1653(__this, method) (( int32_t (*) (ObjectPool_1_t7_215 *, const MethodInfo*))ObjectPool_1_get_countInactive_m7_1535_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m7_1654(__this, method) (( List_1_t1_1220 * (*) (ObjectPool_1_t7_215 *, const MethodInfo*))ObjectPool_1_Get_m7_1537_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m7_1655(__this, ___element, method) (( void (*) (ObjectPool_1_t7_215 *, List_1_t1_1220 *, const MethodInfo*))ObjectPool_1_Release_m7_1539_gshared)(__this, ___element, method)