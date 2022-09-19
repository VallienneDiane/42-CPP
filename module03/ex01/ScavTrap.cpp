/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:30:59 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 14:52:56 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
ScavTrap::ScavTrap( void )
{
	this->_name = "unknow";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap default constructor called : " << this->_name << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << "ScavTrap name constructor called : " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->setName(src._name);
	this->setHitP(src._hitPoints);
	this->setEnergyP(src._energyPoints);
	this->setAttackP(src._attackDamage);
	std::cout << YELLOW << "ScavTrap copy constructor called : " << this->_name << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << YELLOW << "ScavTrap copy assignment operator called : " << this->_name << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void ScavTrap::attack(const std::string& target)
{
	if (this->getHitP() <= 0 | this->getEnergyP() <= 0)
	{
		std::cout << PURPLE << "ScavTrap " << this->getName() << " can't attack cause he is already dead ... ";
		std::cout << PURPLE << "(Life:" << this->getHitP() << "pts & Energy:" << this->getEnergyP() << "pts)" << std::endl;
	}
	else
	{
		std::cout << PURPLE << "ScavTrap " << this->getName() << " attacks " << target
				<< ", causing " << this->getAttackD() << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << BLUE << "Mode Gate keeper activated !" << std::endl;
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
ScavTrap::~ScavTrap( void )
{
	std::cout << RED << "ScavTrap destructor called : " << this->_name << std::endl;
	return;
}