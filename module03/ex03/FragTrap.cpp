/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:09:45 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

FragTrap::FragTrap( void ) : _HP(100), _EP(100), _AD(30)
{
	this->_name = "unknow_frag";
	this->_hitPoints = this->_HP;
	this->_energyPoints = this->_EP;
	this->_attackDamage = this->_AD;
	std::cout << ORANGE << "FragTrap default constructor called : " << this->_name << std::endl;
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name), _HP(100), _EP(100), _AD(30)
{
	this->_name = name;
	this->_hitPoints = this->_HP;
	this->_energyPoints = this->_EP;
	this->_attackDamage = this->_AD;
	std::cout << ORANGE << "FragTrap name constructor called : " << name << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src) : _HP(100), _EP(100), _AD(30)
{
	*this = src;
	std::cout << ORANGE << "FragTrap copy constructor called : " << this->_name << std::endl;
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