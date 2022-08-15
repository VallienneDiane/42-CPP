/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:31:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:45:25 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	*this = src;
	std::cout << "WrongAnimal copy constrcutor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src._type;
	return (*this);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
	return;
}

/**********************************************/
/*			        GETTERS                   */
/* ********************************************/

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}