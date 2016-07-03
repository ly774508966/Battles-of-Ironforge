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

// Mono.Xml.SecurityParser
struct SecurityParser_t1_140;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1_142;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t1_141;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1_860;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C" void SecurityParser__ctor_m1_1503 (SecurityParser_t1_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C" void SecurityParser_LoadXml_m1_1504 (SecurityParser_t1_140 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C" SecurityElement_t1_142 * SecurityParser_ToXml_m1_1505 (SecurityParser_t1_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnStartParsing_m1_1506 (SecurityParser_t1_140 * __this, SmallXmlParser_t1_141 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C" void SecurityParser_OnProcessingInstruction_m1_1507 (SecurityParser_t1_140 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C" void SecurityParser_OnIgnorableWhitespace_m1_1508 (SecurityParser_t1_140 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void SecurityParser_OnStartElement_m1_1509 (SecurityParser_t1_140 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C" void SecurityParser_OnEndElement_m1_1510 (SecurityParser_t1_140 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C" void SecurityParser_OnChars_m1_1511 (SecurityParser_t1_140 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void SecurityParser_OnEndParsing_m1_1512 (SecurityParser_t1_140 * __this, SmallXmlParser_t1_141 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
