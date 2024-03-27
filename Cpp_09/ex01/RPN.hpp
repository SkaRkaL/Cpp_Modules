#include <iostream>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
	private:
		std::stack<int> _stack;
	public:
		RPN();
		~RPN();
		void evaluate(std::string s);

		class Error : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error";
				}
		};
};