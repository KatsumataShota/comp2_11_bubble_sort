﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	
	if (begin == NULL || end == NULL)
		return false;

	if (end < begin)
		return false;

	int i, n;
	int tnum = end - begin;
	item tmp;

	for (i = 0; i < tnum; i++)
	{
		for (n = i + 1; n < tnum;n++)
		{
			if (begin[i].key > begin[n].key)
			{
				tmp = begin[i];
				begin[i] = begin[n];
				begin[n] = tmp;
			}
		}
	}
	return true;
}
