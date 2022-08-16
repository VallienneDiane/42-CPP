/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:22:30 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:47:26 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Cat::Cat(void)
{
	this->_type = "Cat";
	this->_catBrain = new Brain();
	std::cout << BLUE << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	this->_catBrain = new Brain();
	std::cout << BLUE << "Cat copy constructor called" << std::endl;
}

Cat	& Cat::operator=(const Cat &src)
{
	this->_type = src.getType();
	this->_catBrain = new Brain();
	*(this->_catBrain) = *(src._catBrain);
	std::cout << BLUE << "Cat copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Cat::makeSound(void) const
{
	std::cout << "Miaou miaou" << std::endl;
	return;
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
Cat::~Cat( void )
{
	delete this->_catBrain;
	std::cout << BLUE << "Cat destructor called" << std::endl;
	return;
}