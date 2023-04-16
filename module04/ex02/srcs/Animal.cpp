/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:27:38 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 10:32:38 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
AAnimal::AAnimal( void ) : _type("Aanimal")
{
	std::cout << GREEN << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
	std::cout << GREEN << "AAnimal copy constructor called" << std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal &src)
{
	this->_type = src.getType();
	std::cout << GREEN << "AAnimal copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	AAnimal::makeSound(void) const
{
	std::cout << "* animal sounds *" << std::endl;
}
/**********************************************/
/*			        GETTERS                   */
/* ********************************************/
std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
AAnimal::~AAnimal( void )
{
	std::cout << GREEN << "AAnimal destructor called" << std::endl;
}