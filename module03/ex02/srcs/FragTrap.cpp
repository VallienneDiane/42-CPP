/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 11:49:00 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"
#include "../incs/ClapTrap.hpp"
#include "../incs/FragTrap.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/**********************************************/
FragTrap::FragTrap(void)
{
	this->_name = "unknow";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << ORANGE << "FragTrap default constructor called : " << this->_name << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setName(name);
	this->setHitP(100);
	this->setEnergyP(100);
	this->setAttackP(30);
	std::cout << ORANGE << "FragTrap name constructor called : " << name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << ORANGE << "FragTrap copy constructor called : " << this->_name << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitP();
	this->_energyPoints = src.getEnergyP();
	this->_attackDamage = src.getAttackD();
	std::cout << ORANGE << "FragTrap copy assignment operator called : " << this->_name << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/**********************************************/
void FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << this->_name << " : High fives guys ?" << std::endl;
}
/**********************************************/
/*			     DESTRUCTOR                   */
/**********************************************/
FragTrap::~FragTrap( void )
{
	std::cout << WHITE << "FragTrap destructor called : " << this->_name << std::endl;
	return;
}