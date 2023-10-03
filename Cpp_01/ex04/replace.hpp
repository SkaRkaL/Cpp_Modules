#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replace {
	private:
		std::ifstream in_file;
		std::ofstream out_file;
	public:
		Replace(std::string filename);
		~Replace();
		void replace(std::string s1, std::string s2);
};


#endif