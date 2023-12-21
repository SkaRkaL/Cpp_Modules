#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		unsigned int	m_hitpoints;
		unsigned int	m_energyPoints;
		unsigned int	m_attackDamage;
		std::string		m_name;
	public:
		ClapTrap();

		ClapTrap( const std::string &name );
		
		ClapTrap( const ClapTrap &obj );
		
		~ClapTrap(  );

		ClapTrap	&operator=(const ClapTrap &obj);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};