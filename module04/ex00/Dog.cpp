/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 17:01:19 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "dog";
	std::cout << "Dog default constructor called" << std::endl;
	return;
}


void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf ouaf" << std::endl;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}