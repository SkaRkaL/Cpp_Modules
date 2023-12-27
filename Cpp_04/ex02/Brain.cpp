#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain Called." << std::endl;
}

Brain:: Brain(const Brain &copy)
{
	int i = 0;
	std::cout << "Copy Constructor Brain Called." << std::endl;
	while (i++ < 100)
		this->ideas[i] = copy.ideas[i];
	
}

Brain &Brain:: operator = (const Brain &assigment)
{
	int i = 0;
	std::cout << "Copy Assignment Operator Called for Brain." << std::endl;
	while (i++ < 100)
		this->ideas[i] = assigment.ideas[i];
	return *this;
}

Brain:: ~Brain()
{
	std::cout << "Destructor Brain Called." << std::endl;
}