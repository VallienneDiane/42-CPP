/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:27:38 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 16:13:07 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
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
	std::cout << GREEN << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal & Animal::operator=(const Animal &src)
{
	std::cout << GREEN << "Animal copy assignement operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Animal::makeSound(void) const
{
	std::cout << "* animal sounds *" << std::endl;
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