#include "ABC.hpp"
#include "Base.hpp"

Base *generate(void)
{
	int i = time(NULL) % 3;
	if (i == 0)
		return dynamic_cast<Base*>(new A);
	else if (i == 1)
		return dynamic_cast<Base*>(new B);
	else
		return dynamic_cast<Base*>(new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "p type is A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p type is B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p type is C." << std::endl;
	else
		std::cout << "Idnetification failed." << std::endl;
}

void identify(Base &p)
{
	try {
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &abc) {
		try {
			B b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &abc) {
			try {
				C c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception &abc) {
				std::cerr << "Error: " << abc.what() << std::endl;
			}
		}
	}
}