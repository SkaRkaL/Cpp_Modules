#pragma once

#include <iostream>

template <typename T>
void	check(T &elm)
{
	std::cout << elm << "\n";
}

template <typename T, typename L, typename F>
void	iter(T add, L len, F ft)
{
	for (L i = 0; i < len ; i++)
		ft(add[i]);
}
