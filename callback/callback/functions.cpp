/**
*@file		functions.cpp
*@brief		implements fuctions defined in header.h and used in callback.cpp
*/

#include "stdafx.h"

int max(int a, int b)
{
	return (a > b) ? a : b;
}


int min(int a, int b)
{
	return (a < b) ? a : b;
}


int sum(int s, int a)
{
	return s += a;
}


int my_callback(int* arr, unsigned int len, int(*comparator) (int, int))
{
	int el = arr[0];
	unsigned int i;
	for (i = 1; i < len; ++i)
	{
		el = comparator(el, arr[i]);
	}
	return el;
}

