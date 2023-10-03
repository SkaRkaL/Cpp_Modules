#include "replace.hpp"

Replace::Replace(std::string fname) {
	
	this->in_file.open(fname);
	if (this->in_file.is_open() == false) {
		std::cout << "Error: could not open file" << std::endl;
		exit(1);
	}

	this->out_file.open(fname + ".replace");
	if (this->out_file.is_open() == false) {
		std::cout << "Error: could not open file" << std::endl;
		exit(1);
	}
}

Replace::~Replace() {
	this->in_file.close();
	this->out_file.close();
}

void Replace::replace(std::string s1, std::string s2) {
	std::string line;
	size_t index;
	size_t hold;

	while (std::getline(in_file, line)) {
		hold = 0;
		while(true) {
			index = line.find(s1, hold);
			if (s1 == "" || index == std::string::npos)
				break;
			else {
				line.erase(index, s1.length());
				line.insert(index, s2);
			}
		}
		this->out_file << line << std::endl;
	}
}