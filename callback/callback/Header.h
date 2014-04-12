/**
*@file		callback.h
*@brief		header file that defines prototypes of functions used in file callback.cpp
*/

#ifndef TASK3_1_H_
#define TASK3_1_H_

#include "stdafx.h"

/**
* @brief			Defines the bigger number between two numbers
* @param	[in]	int a - first number
			[in]	int b - second number
*
* @return	int		returns bigger number
*/
int max(int a, int b);

/**
* @brief			Defines the smaller number between two numbers
* @param	[in]	int a - first number
			[in]	int b - second number
*
* @return	int		returns smaller number
*/
int min(int a, int b);

/**
* @brief			Add second number to first
* @param	[in]	int a - first number
			[in]	int b - second number
*
* @return	int		returns the sum of two numbers
*/
int sum(int a, int b);

/**
* @brief			Callback function for doing some actions on array of numbers
* @param	[in]	int* arr - pointer to array of numbers
			[in]	unsigned int len - the length of array
			[in]	int (*comparator) (int, int) - pointer to function that responds for doing action on elements of array
*
* @return	int		returns result of action
*/
int my_callback(int* arr, unsigned int len, int(*comparator) (int, int));

#endif