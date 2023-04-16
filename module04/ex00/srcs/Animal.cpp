/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:27:38 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 15:05:44 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Animal::Animal(void) : _type("animal")
{
	std::cout << BLUE << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &src)
{
	std::cout << ORANGE << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal & Animal::operator=(const Animal &src)
{
	this->_type = src.getType();
	std::cout << YELLOW << "Animal copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Animal::makeSound(void) const
{
	std::cout << GREY << "* animal sounds *" << std::endl;
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
	std::cout << BLUE << "Animal destructor called" << std::endl;
	return;
}