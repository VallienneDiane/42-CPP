/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:31:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 10:34:24 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongAnimal.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
	this->_type = src.getType();
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
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
}