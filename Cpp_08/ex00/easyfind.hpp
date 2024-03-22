#pragma once

#include <iostream>
#include <vector>
#include <exception>


template <typename T>
typename T::iterator	easyfind(T	&C, int	Val)
{
	typename T::iterator N = std::find(C.begin(), C.end(), Val);

	(N == C.end()) ? throw std::invalid_argument("Error: The value that you need doesn't not found.") : 0;

	return N;
}
