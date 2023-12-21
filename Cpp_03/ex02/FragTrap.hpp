#pragma once 

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		unsigned int	m_hitpoints;
		unsigned int	m_energyPoints;
		unsigned int	m_attackDamage;
		std::string		m_name;
	public:
		FragTrap();
		
		FragTrap( const std::string &name );
		
		FragTrap( const FragTrap &obj );
		
		~FragTrap(  );

		FragTrap	&operator=(const FragTrap &obj);

		void highFivesGuys( void );
};