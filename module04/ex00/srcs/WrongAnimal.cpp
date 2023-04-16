/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:31:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 15:05:26 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << PURPLE << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << ORANGE << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src.getType();
	std::cout << YELLOW << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	WrongAnimal::makeSound(void) const
{
	std::cout << RED << "* wrong animal sounds *" << std::endl;
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
	std::cout << PURPLE << "WrongAnimal destructor called" << std::endl;
	return;
}