#pragma once

#include <iostream>
#include <cstdint>

typedef struct	s_data
{
	int			blackHole;
	double		level;
	std::string	name;
}				Data;

Data		*deserialize(uintptr_t raw);
uintptr_t	serialize(Data *ptr);
