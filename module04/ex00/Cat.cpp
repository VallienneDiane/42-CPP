/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:22:30 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:56:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	& Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	std::cout << "Cat copy assignement operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou miaou" << std::endl;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	return;
}