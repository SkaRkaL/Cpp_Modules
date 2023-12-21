#pragma once

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
	private:
		unsigned int	m_hitpoints;
		unsigned int	m_energyPoints;
		unsigned int	m_attackDamage;
		std::string		m_name;
	public:
		ScavTrap();
		ScavTrap( const std::string	&name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator=(const ScavTrap &obj);
		void	setName(std::string	&name);
		~ScavTrap();

		void attack(std::string const& target);
		void guardGate();
};
