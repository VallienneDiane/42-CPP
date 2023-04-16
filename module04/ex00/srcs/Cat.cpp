/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:22:30 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 15:05:39 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << GREY << "Cat default constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &src)
{
	std::cout << ORANGE << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat	& Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	std::cout << YELLOW << "Cat copy assignement operator called" << std::endl;
	return (*this);
}
/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
void	Cat::makeSound(void) const
{
	std::cout << GREEN << "Miaou miaou" << std::endl;
	return;
}
/**********************************************/
/*			     DESTRUCTOR                   */
/* ********************************************/
Cat::~Cat( void )
{
	std::cout << GREY << "Cat destructor called" << std::endl;
	return;
}