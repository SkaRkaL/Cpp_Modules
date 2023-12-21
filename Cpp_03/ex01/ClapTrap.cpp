#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	m_hitpoints = 10;
	m_energyPoints = 10; 
	m_attackDamage = 0 ;
	std::cout << "default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : 
	m_hitpoints(10), 
	m_energyPoints(10), 
	m_attackDamage(0) 
{
	this->m_name = name;
	std::cout << "ClapTrap [ " << m_name << " ] is Ready  !!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	this->m_name = obj.m_name;
	this->m_hitpoints = obj.m_hitpoints;
	this->m_energyPoints = obj.m_energyPoints;
	this->m_attackDamage = obj.m_attackDamage;

	std::cout << "= called \n";

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (m_energyPoints <= 0)
	{
		std::cout << "ClapTrap [ " << m_name << " ] can't fight :(" << std::endl;
		return ;
	}
	std::cout << "ClapTrap [ " << m_name << " ] attacks [ " << target << " ], causing " << m_attackDamage << " points of damage!" << std::endl;
	m_energyPoints = m_energyPoints - 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitpoints <= amount)
    {
        std::cout << "[ " << m_name << " ] is dead!" << std::endl;
        return ;
    }
    std::cout << "[ " << m_name << " ] takes " << amount << " damage!" << std::endl;
    m_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_energyPoints < amount)
    {
        std::cout << "[ " << m_name << " ] has no Energy !" << std::endl;
        return ;
    }
    std::cout << "[ " << m_name << " ] repairs itself for " << amount << " hit points!" << std::endl;
    m_energyPoints = m_energyPoints - 1;
    m_hitpoints = m_hitpoints + amount;
}
