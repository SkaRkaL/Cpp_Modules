#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;

	m_hitpoints = 100;
	m_energyPoints = 50;
	m_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string	&name) : ClapTrap(name),
	m_hitpoints(100),
	m_energyPoints(50),
	m_attackDamage(20)
{
	m_name = name;
	std::cout << "ScavTrap [ " << m_name << " ] is Ready  !!\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	*this = obj;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
	this->m_name = obj.m_name;
	this->m_hitpoints = obj.m_hitpoints;
	this->m_energyPoints = obj.m_energyPoints;
	this->m_attackDamage = obj.m_attackDamage;
	
	return *this;
}

void ScavTrap::setName(std::string	&name)
{
	this->m_name = name;
}

void ScavTrap::attack(const std::string& target)
{
	if (m_energyPoints <= 0)
	{
		std::cout << "ScavTrap [ " << m_name << " ] can't fight :(" << std::endl;
		return ;
	}
	std::cout << "ScavTrap [ " << m_name << " ] attacks [ " << target << " ], causing " << m_attackDamage << " points of damage!" << std::endl;
	m_energyPoints = m_energyPoints - 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap [ " << m_name << " ] has enterred in Gate keeper mode\n" << std::endl;
}
