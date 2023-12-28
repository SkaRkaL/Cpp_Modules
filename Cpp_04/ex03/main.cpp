#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

void ft()
{
	system("leaks interface");
}

int main()
{
	atexit(ft);
	IMateriaSource* src = new MateriaSource();
	IMateriaSource *d(src);
	d->learnMateria(new Ice());
	d->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = d->createMateria("ice");
	me->equip(tmp);
	tmp = d->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	std::cout << "\n------------------------0-----" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "-----------------------------\n" << std::endl;

	delete bob;
	delete me;
	delete src;
	return 0;
}