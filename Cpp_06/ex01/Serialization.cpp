#include "Serialization.hpp"

uintptr_t	serialization::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*serialization::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
