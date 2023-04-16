/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:35:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 16:02:14 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat	& WrongCat::operator=(const WrongCat &src)
{
	this->_type = src.getType();
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	WrongCat::makeSound(void) const
{
	std::cout << "wrong miaou" << std::endl;
	return;
}
/**********************************************/
/*			        DESTRUCTOR                */
/* ********************************************/
WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}