/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 10:18:53 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
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
	this->_type = src.getType();
	std::cout << "Dog copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf" << std::endl;
	return;
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}