/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:31:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/10 17:27:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

ClapTrap::ClapTrap(void): _name(), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
	std::cout << "Constructor called, ClapTrap name is " << this->_name << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src): _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const ClapTrap &src)
{
	stream << "ClapTrap" << src.getName() << "a" << src.getHitP() 
			<< "points de vie, " << src.getEnergyP() << "de points d'energie et a eu " 
			<< src.getAttackD() << " de dommages" << std::endl;
	return (stream);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/**********************************************/
/*			        GETTERS                   */
/* ********************************************/

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitP(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyP(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackD(void) const
{
	return (this->_attackDamage);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/

// void ClapTrap::attack(const std::string& target)
// {
// }

// void ClapTrap::takeDamage(unsigned int amount)
// {
// }

// void ClapTrap::beRepaired(unsigned int amount)
// {
// }
