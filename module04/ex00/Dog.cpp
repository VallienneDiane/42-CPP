/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:55:20 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	& Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	std::cout << "Dog copy assignement operator called" << std::endl;
	return (*this);
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