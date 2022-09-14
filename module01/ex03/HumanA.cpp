/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 15:58:50 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _weapon(weapon)
{
	this->_name = name;
	std::cout << name << " has been created" << std::endl;
	return;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << " has been destroyed " << std::endl;
	return;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}