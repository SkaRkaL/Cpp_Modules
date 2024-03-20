#pragma once 

#include <iostream>

template <typename T>
void    swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template <typename C, typename T>
C   min(C a, T b)
{
	if (a == b)
		return b;
	if (a > b)
		return b;
	return a;
}

template <typename T, typename C>
T   max(T a, C b)
{
	if (a == b)
		return b;
	if (a > b)
		return a;
	return b;
}

