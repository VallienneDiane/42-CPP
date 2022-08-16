/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 16:53:22 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << WHITE << "Ice default constructor called" << std::endl;
	return;
}

Ice::Ice(std::string type)
{
	this->_type = type;
	std::cout << WHITE << "Ice type constructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &src)
{
	std::cout << WHITE << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice & Ice::operator=(const Ice &src)
{
	std::cout << WHITE << "Ice copy assignment operator constructor called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
AMateria* Ice::clone(void) const
{
	return (new Ice(*this));
}

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
Ice::~Ice(void)
{
	std::cout << WHITE << "Ice destructor called" << std::endl;
	return;
}