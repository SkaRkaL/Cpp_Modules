
#pragma once

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		void makeSound() const;
		std::string getType() const;
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& copy);
};
