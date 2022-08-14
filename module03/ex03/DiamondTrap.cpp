/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:39:28 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 15:58:39 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

DiamondTrap::DiamondTrap( void ) : _name("---")
{
	this->_hitPoints = FragTrap::HP;
	this->_energyPoints = ScavTrap::EP;
	this->_attackDamage = FragTrap::AD;
	std::cout << BLUE << "DiamondTrap default constructor called : " << this->_name << std::endl;
	return;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::HP;
	this->_energyPoints = ScavTrap::EP;
	this->_attackDamage = FragTrap::AD;
	std::cout << BLUE << "DiamondTrap name constructor called : " << name << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << BLUE << "DiamondTrap copy constructor called : " << this->_name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	this->ClapTrap::_name = src.ClapTrap::_name;
	this->DiamondTrap::_name = src.DiamondTrap::_name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << BLUE << "DiamondTrap copy assignment operator called : " << this->_name << std::endl;
	return (*this);
}

/**********************************************/
/*			     FUNCTION	                 */
/* ********************************************/

void	DiamondTrap::whoAmI(void)
{
	std::cout << BLUE << "My name is " << this->_name ;
	std::cout << BLUE << " & ClapTrap's name is "<< ClapTrap::_name << std::endl;
}

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/

DiamondTrap::~DiamondTrap( void )
{
	std::cout << BLUE << "DiamondTrap destructor called : " << this->_name << std::endl;
	return;
}