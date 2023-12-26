#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		virtual void makeSound() const;
		std::string getType() const;
		void setType(std::string type) { this->type = type; }
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
};

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

std::string Animal::getType() const
{
	return (type);
}

Animal	 &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Assignation Operator [=] Called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound [ SOUND ]" << std::endl;
}

#endif