/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:34 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 16:33:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	std::cout << name << " has been created" << std::endl;
	return;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name <<  " has been destroyed" << std::endl;
	return;
}

void	HumanB::attack( void ) const
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with his bare hands" << std::endl;	
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;	
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}