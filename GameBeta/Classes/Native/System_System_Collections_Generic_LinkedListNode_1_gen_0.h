﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t3_849;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t3_850;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct  LinkedListNode_1_t3_850  : public Object_t
{
	// T System.Collections.Generic.LinkedListNode`1::item
	int32_t ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t3_849 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t3_850 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t3_850 * ___back_3;
};
