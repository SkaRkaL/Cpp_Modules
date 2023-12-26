#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	std::cout << std::	endl;
	std::cout << "===============" << std::endl;
	const WrongAnimal* i = new WrongCat();

	std::cout << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "=====================================\\\\\\\\\\\\\\=============" << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	return 0;
}
// int main()
// {
// 	const Animal* meta = new Animal();
// 	std::cout << std::endl;
// 	std::cout << "===============" << std::endl;
// 	const Animal* j = new Dog();
// 	std::cout << std::endl;
// 	std::cout << "===============" << std::endl;
// 	const Animal* i = new Cat();

// 	std::cout << "=====================================\\\\\\\\\\\\\\=============" << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	std::cout << "=====================================\\\\\\\\\\\\\\=============" << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	std::cout << std::endl;
// 	delete meta;
// 	delete j;
// 	delete i;
// 	return 0;
// }