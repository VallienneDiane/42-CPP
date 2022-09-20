/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 16:27:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Dog::Dog(void)
{
	this->_type = "Dog";
	this->_dogBrain = new Brain();
	std::cout << ORANGE << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &src)
{
	std::cout << ORANGE << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog	& Dog::operator=(const Dog &src)
{
	std::cout << ORANGE << "Dog copy assignement operator called" << std::endl;
	this->_type = src.getType();
	this->_dogBrain = new Brain();
	*(this->_dogBrain) = *(src._dogBrain);
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
Dog::~Dog(void)
{
	delete this->_dogBrain;
	std::cout << ORANGE << "Dog destructor called" << std::endl;
	return;
}