#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat test("[ SkRkL ]", 1);
		std::cout << test;
		test.increment();
		std::cout << test;
	}
	catch (const std::exception &excp) {
		std::cerr << excp.what() << '\n';
	}
	std::cout << "-------------------------------------\n" << std::endl;
	try {
		Bureaucrat test("[ SkRkL ]", 148);
		std::cout << test;
		test.decrement();
		std::cout << test;
	}
	catch (const std::exception &excp) {
		std::cerr << excp.what() << '\n';
	}
}
