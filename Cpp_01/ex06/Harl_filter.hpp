#ifndef HARL_FILTER_HPP
# define HARL_FILTER_HPP

# include <iostream>
# include <string>

class Harl {
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		void	complain(std::string level);
};


#endif