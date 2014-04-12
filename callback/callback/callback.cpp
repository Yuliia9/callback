// callback.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*
* @file			callback.cpp
* @brief		Program shows how to implement callback functions and use function pointers
				by doing some actions on elements of array

* Copyright 2014 by Yuliia Lyubchik Inc.,
*
* This software is the confidential and proprietary information
* of Yuliia Lyubchik. ("Confidential Information").  You
* shall not disclose such Confidential Information and shall use
* it only with permission from Yuliia.
*
*/
#include "Header.h"
#include <iostream>
#include <functional>
using std::cout;

int main()
{
	int arr[9] = { 1, 5, 8, -5, 3, 5, -1, 9, 0 };
	unsigned int size = 9;

	cout << "Max element is: " << my_callback(arr, size, max) << '\n';

	cout << "Min element is: " << my_callback(arr, size, min) << '\n';

	using namespace std::placeholders; /*visibility of _1, _2,... */
	auto psum = std::bind(my_callback, _1, _2, sum);
	cout << "Sum of all elements in array: " << psum(arr, size) << '\n';
	return 0;
}

