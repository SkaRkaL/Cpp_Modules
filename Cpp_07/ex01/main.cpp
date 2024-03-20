#include "iter.hpp"
#include <string>


int main()
{
	std::string s[5] = {
							"Black Hole = 35",
							"Login : Sakarkal",
							"Real Name : Saad",
							"Age : 20",
							"Cursus Level : 5.22"
						};
	iter(s, 5, check<std::string>);

	return 0;
}
