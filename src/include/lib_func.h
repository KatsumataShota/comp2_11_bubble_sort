﻿#pragma once // インクルードガード

#include <stdbool.h>

// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
extern "C" {
#endif

	typedef struct item_
	{
		int key;
		char value[256];
	}item;

	// バブルソート(引数が不適切であればfalseを返す)
	bool bubble_sort(item *begin, const item* end);

	// C++ でCのライブラリを使うときのおまじない
#ifdef __cplusplus
} // extern "C"
#endif
