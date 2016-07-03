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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t6_21;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t6_22;
// UnityEngine.Transform
struct Transform_t5_83;
// UnityEngine.GameObject
struct GameObject_t5_113;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C" void DataSetTrackableBehaviour_OnDrawGizmos_m6_160 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void DataSetTrackableBehaviour_OnTrackerUpdate_m6_161 (DataSetTrackableBehaviour_t6_21 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C" bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m6_162 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetName()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetName_m6_163 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetPath()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetPath_m6_164 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetDataSetPath(System.String)
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetDataSetPath_m6_165 (DataSetTrackableBehaviour_t6_21 * __this, String_t* ___dataSetPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ExtendedTracking()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ExtendedTracking_m6_166 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetExtendedTracking(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetExtendedTracking_m6_167 (DataSetTrackableBehaviour_t6_21 * __this, bool ___extendedTracking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_InitializeSmartTerrain()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_InitializeSmartTerrain_m6_168 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetInitializeSmartTerrain(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetInitializeSmartTerrain_m6_169 (DataSetTrackableBehaviour_t6_21 * __this, bool ___initializeSmartTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ReconstructionToInitialize()
extern "C" ReconstructionFromTargetAbstractBehaviour_t6_22 * DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ReconstructionToInitialize_m6_170 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetReconstructionToInitialize_m6_171 (DataSetTrackableBehaviour_t6_21 * __this, ReconstructionFromTargetAbstractBehaviour_t6_22 * ___reconstructionToInitialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C" Vector3_t5_68  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMin_m6_172 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMin_m6_173 (DataSetTrackableBehaviour_t6_21 * __this, Vector3_t5_68  ___occluderBoundsMin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C" Vector3_t5_68  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMax_m6_174 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMax_m6_175 (DataSetTrackableBehaviour_t6_21 * __this, Vector3_t5_68  ___occluderBoundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_IsSmartTerrainOccluderOffset()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_IsSmartTerrainOccluderOffset_m6_176 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetIsSmartTerrainOccluderOffset(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetIsSmartTerrainOccluderOffset_m6_177 (DataSetTrackableBehaviour_t6_21 * __this, bool ___isOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderOffset()
extern "C" Vector3_t5_68  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderOffset_m6_178 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderOffset(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderOffset_m6_179 (DataSetTrackableBehaviour_t6_21 * __this, Vector3_t5_68  ___occluderOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderRotation()
extern "C" Quaternion_t5_69  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderRotation_m6_180 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderRotation(UnityEngine.Quaternion)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderRotation_m6_181 (DataSetTrackableBehaviour_t6_21 * __this, Quaternion_t5_69  ___occluderRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderLockedInPlace()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderLockedInPlace_m6_182 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetLockSmartTerrainOccluderInPlace(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetLockSmartTerrainOccluderInPlace_m6_183 (DataSetTrackableBehaviour_t6_21 * __this, bool ___lockOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.GetDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_GetDefaultOccluderBounds_m6_184 (DataSetTrackableBehaviour_t6_21 * __this, Vector3_t5_68 * ___boundsMin, Vector3_t5_68 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_AutoSetOccluderFromTargetSize()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_AutoSetOccluderFromTargetSize_m6_185 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetAutoSetOccluderFromTargetSize(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetAutoSetOccluderFromTargetSize_m6_186 (DataSetTrackableBehaviour_t6_21 * __this, bool ___autoset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C" void DataSetTrackableBehaviour__ctor_m6_187 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m6_188 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m6_189 (DataSetTrackableBehaviour_t6_21 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t5_83 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m6_190 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t5_113 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m6_191 (DataSetTrackableBehaviour_t6_21 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
