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
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
};

#endif