/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:35:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:37:03 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
	return;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Not a cat, bruuuh" << std::endl;
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}