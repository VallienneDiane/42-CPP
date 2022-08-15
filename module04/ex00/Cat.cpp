/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:22:30 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:23:12 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	return;
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