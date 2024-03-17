#pragma once

#include <iostream>
#include <cstdint>

typedef struct	s_data
{
	int			blackHole;
	double		level;
}				Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);
