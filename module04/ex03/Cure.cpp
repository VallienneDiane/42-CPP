/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:00:22 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 11:38:26 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
/**********************************************/
/*			       CONSTRUCTORS               */
/* ********************************************/
Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << PURPLE << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string type)
{
	this->_type = type;
	std::cout << PURPLE << "Cure type constructor called" << std::endl;
	return;
}

Cure::Cure(const Cure &src)
{
	std::cout << PURPLE << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure & Cure::operator=(const Cure &src)
{
	std::cout << PURPLE << "Cure copy assignment operator constructor called" << std::endl;
	this->_type = src.getType();
	return (*this);
}
/**********************************************/
/*			       FUNCTIONS                  */
/* ********************************************/
Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}
/**********************************************/
/*			       DESTRUCTOR                 */
/* ********************************************/
Cure::~Cure(void)
{
	std::cout << PURPLE << "Cure destructor called" << std::endl;
}