/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 13:59:57 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

FragTrap::FragTrap( void )
{
	this->_name = "unknow_frag";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << ORANGE << "FragTrap default constructor called : " << this->_name << std::endl;
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << ORANGE << "FragTrap name constructor called : " << name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src)
{
	this->setName(src._name);
	this->setHitP(src._hitPoints);
	this->setEnergyP(src._energyPoints);
	this->setAttackP(src._attackDamage);
	std::cout << ORANGE << "FragTrap copy constructor called : " << this->_name << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	std::cout << ORANGE << "FragTrap copy assignment operator called : " << this->_name << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/

void FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << this->_name << " : High fives guys ?" << std::endl;
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/

FragTrap::~FragTrap( void )
{
	std::cout << ORANGE << "FragTrap destructor called : " << this->_name << std::endl;
	return;
}