/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:27:38 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:45:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

Animal::Animal( void ) : _type("animal")
{
	std::cout << GREEN << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << GREEN << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &src)
{
	this->_type = src.getType();
	std::cout << GREEN << "Animal copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Animal::makeSound(void) const
{
	std::cout << "bruuuuuuh" << std::endl;
	return;
}

/**********************************************/
/*			        GETTERS                   */
/* ********************************************/
std::string	Animal::getType(void) const
{
	return (this->_type);
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
Animal::~Animal( void )
{
	std::cout << GREEN << "Animal destructor called" << std::endl;
	return;
}