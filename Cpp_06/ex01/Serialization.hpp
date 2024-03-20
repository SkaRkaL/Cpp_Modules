#pragma once

#include <iostream>
#include <cstdint>

typedef struct	s_data
{
	int			blackHole;
	double		level;
	std::string	name;
}				Data;

class serialization
{
	private:
		serialization();
	public:
		static Data		*deserialize(uintptr_t raw);
		static uintptr_t	serialize(Data *ptr);
};

