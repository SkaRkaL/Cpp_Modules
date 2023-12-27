#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Animal *Beta = new Animal();
		std::cout << "-----------------" << std::endl;
		const Animal *Dogyy = new Dog();
		std::cout << "-----------------" << std::endl;
		const Animal *Catyy = new Cat();

		std::cout << "---------- + + + + +  ----------" << std::endl;
		std::cout << Dogyy->getType() << std::endl;
		std::cout << Catyy->getType() << std::endl;
		std::cout << Beta->getType() << std::endl;
		std::cout << "---------- + + + + +  ----------" << std::endl;
		Catyy->makeSound();
		Dogyy->makeSound();
		Beta->makeSound();
		std::cout << std::endl;
		delete Beta;
		delete Dogyy;
		delete Catyy;
		std::cout << std::endl;
	}
		std::cout << "\x1b[31m==============   WrongAnimal Case   ============\033[0m\n" << std::endl;
	{
		const WrongAnimal* Beta = new WrongAnimal();
		std::cout << "\x1b[36m--------------------------------------\x1b[0m" << std::endl;
		const WrongAnimal* caty = new WrongCat();

		std::cout << "\x1b[36m------------- + + + + +  -------------\x1b[0m" << std::endl;
		std::cout << caty->getType() << std::endl;
		std::cout << Beta->getType() << std::endl;
		std::cout << "\x1b[36m------------- + + + + +  -------------\x1b[0m" << std::endl;

		caty->makeSound();
		Beta->makeSound();

		std::cout << std::endl;
		delete Beta;
		delete caty;
	}
	return 0;
}