/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:27:38 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 17:04:24 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

Animal::Animal( void ) : _name("----"), _type("animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(std::string name) : _name(name)
{
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &src) : _name(src._name), _type(src._type)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	std::cout << "Animal copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/

void	Animal::makeSound(void) const
{
	std::cout << "Indistinct animal sound" << std::endl;
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
	std::cout << "Animal destructor called" << std::endl;
	return;
}