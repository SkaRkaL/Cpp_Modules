#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		std::cout << "\x1b[33m-\x1b[0m" << std::endl;
		const Animal *Dogyy = new Dog();
		std::cout << "\x1b[33m-\x1b[0m" << std::endl;
		const Animal *Catyy = new Cat();

		std::cout << "\x1b[33m---------- + + + + +  ----------\x1b[0m" << std::endl;
		std::cout << Dogyy->getType() << std::endl;
		std::cout << Catyy->getType() << std::endl;
		std::cout << std::endl;
		Catyy->makeSound();
		Dogyy->makeSound();
		std::cout << "\x1b[33m---------- + + + + +  ----------\x1b[0m" << std::endl;
		std::cout << std::endl;
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
		std::cout << std::endl;
		caty->makeSound();
		Beta->makeSound();
		std::cout << "\x1b[36m------------- + + + + +  -------------\x1b[0m" << std::endl;

		std::cout << std::endl;
		delete Beta;
		delete caty;
		std::cout << std::endl;
	}
		std::cout << "\x1b[32m==============   Deep Copy Case   ============\033[0m\n" << std::endl;
	{
		Animal *prince[4];
		int k = 0;
		while (k <= 4)
		{
			if (k < 2)
			{
				std::cout << "\x1b[34m===========+ + +\x1b[0m \x1b[33m CAT \x1b[0m\x1b[33m" << k << "\x1b[0m\x1b[34m + + +===========\x1b[0m" << std::endl;
				prince[k] =  new Cat();
				std::cout << std::endl;
				prince[k]->makeSound();
				std::cout << std::endl;
				delete prince[k];
			}
			else
			{
				std::cout << "\x1b[34m===========+ + +\x1b[0m \x1b[35m DOG \x1b[0m\x1b[35m" << k << "\x1b[0m\x1b[34m + + +===========\x1b[0m" << std::endl;
				prince[k] = new Dog();
				std::cout << std::endl;
				prince[k]->makeSound();
				std::cout << std::endl;
				delete prince[k];
			}
			k++;
		}
		std::cout << "\x1b[34m========================================\x1b[0m" << std::endl;
	}
	return 0;
}