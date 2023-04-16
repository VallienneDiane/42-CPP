/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:30:59 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 11:30:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"
#include "../incs/ClapTrap.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
ScavTrap::ScavTrap( void )
{
	this->setName("unknow");
	this->setHitP(100);
	this->setEnergyP(50);
	this->setAttackP(20);
	std::cout << YELLOW << "ScavTrap default constructor called : " << this->_name << std::endl;
	return;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->setName(name);
	this->setHitP(100);
	this->setEnergyP(50);
	this->setAttackP(20);
	std::cout << YELLOW << "ScavTrap name constructor called : " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << YELLOW << "ScavTrap copy constructor called : " << this->_name << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitP();
	this->_energyPoints = src.getEnergyP();
	this->_attackDamage = src.getAttackD();
	std::cout << YELLOW << "ScavTrap copy assignment operator called : " << this->_name << std::endl;
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