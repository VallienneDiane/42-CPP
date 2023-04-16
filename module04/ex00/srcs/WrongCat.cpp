/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:35:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 14:02:49 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
WrongCat::WrongCat( void )
{
	this->_type = "WrongCat";
	std::cout << WHITE << "WrongCat default constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << ORANGE << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat	& WrongCat::operator=(const WrongCat &src)
{
	this->_type = src.getType();
	std::cout << YELLOW << "WrongCat copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	WrongCat::makeSound(void) const
{
	std::cout << ORANGE << "wrong miaou" << std::endl;
	return;
}
/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
WrongCat::~WrongCat( void )
{
	std::cout << WHITE << "WrongCat destructor called" << std::endl;
	return;
}