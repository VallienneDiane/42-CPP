/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:31:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 11:02:47 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
ClapTrap::ClapTrap(void): _name("unknow"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BLUE << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREY << "Name constructor called : " << this->_name << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << YELLOW <<"Copy constructor called : " << this->_name << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitP();
	this->_energyPoints = src.getEnergyP();
	this->_attackDamage = src.getAttackD();
	std::cout << ORANGE << "Copy assignment operator called : " << this->_name << std::endl;
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
		std::cout << RED << "ClapTrap " << this->_name << " doesn't have enough energy or life points to attack ";
		std::cout << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		std::cout << PURPLE << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
		std::cout << RED << "ClapTrap " << this->_name << " is already dead" << std::endl;
	else
	{
		std::cout << ORANGE << "ClapTrap " << this->_name << "(Life:" << this->_hitPoints << "pts) take damage of "<< amount << " points !" ;
		this->_hitPoints -= amount;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
		std::cout << " (Life:" << this->_hitPoints << "pts)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0 | this->_energyPoints <= 0)
	{
		std::cout << GREY << "ClapTrap " << this->_name << " doesn't have enough energy or life points to be repaired ";
		std::cout << "(Life:" << this->_hitPoints << "pts & Energy:" << this->_energyPoints << "pts)" << std::endl;
	}
	else
	{
		if (this->_hitPoints > 10)
			this->_hitPoints = 10;
		std::cout << GREEN << "ClapTrap " << this->_name << "(Life:" << this->_hitPoints << "pts) has been repaired and won " << amount << " life points " ;
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
	std::cout << BLUE << "Destructor called" << std::endl;
	return;
}
