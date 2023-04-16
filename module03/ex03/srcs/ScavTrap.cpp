/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:30:59 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 13:08:09 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
ScavTrap::ScavTrap( void ) : _HP(100), _EP(50), _AD(20)
{
	this->_name = "unknow_scav";
	this->_hitPoints = this->_HP;
	this->_energyPoints = this->_EP;
	this->_attackDamage = this->_AD;
	std::cout << YELLOW << "ScavTrap default constructor called : " << this->_name << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name), _HP(100), _EP(50), _AD(20)
{
	this->_name = name;
	this->_hitPoints = this->_HP;
	this->_energyPoints = this->_EP;
	this->_attackDamage = this->_AD;
	std::cout << YELLOW << "ScavTrap name constructor called : " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src) : _HP(100), _EP(50), _AD(20)
{
	*this = src;
	std::cout << YELLOW << "ScavTrap copy constructor called : " << this->_name << std::endl;
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
		std::cout << PURPLE << "ScavTrap " << this->getName() << " is already dead, so he can't attack ! ";
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
	std::cout << YELLOW << "ScavTrap destructor called : " << this->_name << std::endl;
	return;
}