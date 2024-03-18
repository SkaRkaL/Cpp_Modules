#include "Serialization.hpp"

int main() {
	Data data;
	uintptr_t raw;

	data.blackHole = 39;
	data.level = 5.22;
	data.name = std::string("sakarkal");

	std::cout	<< "\n--------------- Data Before deserialization ---------------"
				<< std::endl;

	std::cout	<< "Black hole :	"
				<< data.blackHole << std::endl
				<< "Level :	"
				<< data.level
				<< std::endl;

	std::cout	<< "\n--------------- Data After deserialization ---------------"
				<< std::endl;

	// Serialize and Deserialize
	raw = serialize(&data);
	std::cout	<< "	* Serialized Raw *" << std::endl
				<< raw << std::endl
				<< std::endl;

	Data *ptr = deserialize(raw);
	std::cout	<< "	* Deserialized Data *" << std::endl
				<< "Level :	"
				<< ptr->level << std::endl
				<< "Name : "
				<< ptr->name << std::endl
				<< "Black hole : "
				<< ptr->blackHole << std::endl
				<< std::endl;
	return 0;
}
