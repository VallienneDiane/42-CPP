/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/18 11:28:57 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << BLUE << "Ice default constructor called" << std::endl;
	return;
}

Ice::Ice(std::string type)
{
	this->_type = type;
	std::cout << BLUE << "Ice type constructor called" << std::endl;
	return;
}

Ice::Ice(const Ice &src)
{
	std::cout << BLUE << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice & Ice::operator=(const Ice &src)
{
	std::cout << BLUE << "Ice copy assignment operator constructor called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
Ice::~Ice(void)
{
	std::cout << BLUE << "Ice destructor called" << std::endl;
	return;
}