/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 16:11:22 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
	return;
}

Weapon::Weapon( std::string type )
{
	this->_type = type;
	std::cout << type << " weapon has been created" << std::endl;
	return;
}

Weapon::~Weapon( void )
{
	std::cout << this->_type << " weapon has been destroyed" << std::endl;
	return;
}

const std::string	&Weapon::getType( void )
{
	return (this->_type);
}

void	Weapon::setType( std::string new_type )
{
	this->_type = new_type;
}