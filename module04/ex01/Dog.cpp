/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:33:29 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 17:05:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/

Dog::Dog( void ) : Animal::Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	return;
}

Dog::Dog( std::string name ) : Animal::Animal(name)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called : " << name << std::endl;
}

Dog::Dog(const Dog &src) : Animal::Animal(src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	& Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	std::cout << "Dog copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        GETTERS                   */
/* ********************************************/

Brain &	Dog::getBrain(int i) const
{
	return (*this->_brain);
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf ouaf" << std::endl;
	return;
}

/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
	return;
}