/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:31:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 16:09:55 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

ClapTrap::ClapTrap(void): _name("unamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name constructor called : " << this->_name << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src): _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called : " << this->_name << std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called : " << this->_name << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
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

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy or life points to attack";
		std::cout << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << "(Life:" << this->_hitPoints << "pts) take damage of "<< amount << " points !" ;
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << " (Life:" << this->_hitPoints << "pts)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy or life points to be repaired." << std::endl;
	else
	{
		if (this->_hitPoints > 10)
			this->_hitPoints = 10;
		std::cout << "ClapTrap " << this->_name << "(Life:" << this->_hitPoints << "pts) has been repaired and won " << amount << " life points " ;
		this->_hitPoints += amount;
		if (this->_hitPoints > 10)
			this->_hitPoints = 10;
		std::cout << "(Life:" << this->_hitPoints <<"pts)" << std::endl;
		this->_energyPoints--;
	}
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
