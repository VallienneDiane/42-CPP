/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:23:17 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf" << std::endl;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}