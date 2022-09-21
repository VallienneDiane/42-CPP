/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 15:05:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << GREEN << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &src)
{
	std::cout << ORANGE << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog	& Dog::operator=(const Dog &src)
{
	this->_type = src.getType();
	std::cout << YELLOW << "Dog copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Dog::makeSound(void) const
{
	std::cout << BLUE << "Ouaf ouaf" << std::endl;
	return;
}
/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
Dog::~Dog(void)
{
	std::cout << GREEN << "Dog destructor called" << std::endl;
	return;
}