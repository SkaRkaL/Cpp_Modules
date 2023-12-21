#include "FragTrap.hpp"


FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;;

	this->m_hitpoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap(name),
	m_hitpoints(100),
	m_energyPoints(100),
	m_attackDamage(30)

{
	this->m_name = name;
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &obj ) : ClapTrap(obj)
{
	*this = obj;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	this->m_name = obj.m_name;
	this->m_hitpoints = obj.m_hitpoints;
	this->m_energyPoints = obj.m_energyPoints;
	this->m_attackDamage = obj.m_attackDamage;
	
	return *this;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap [ " << m_name << " ] is asking for high fives" << std::endl;
}
