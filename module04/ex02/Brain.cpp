/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:44:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:46:47 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Brain::Brain(void)
{
	std::cout << RED << "Brain default constructor called" << std::endl;
	return;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << RED <<"Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &src)
{
	(void)src;
	std::cout << RED <<"Brain copy assignement operator called" << std::endl;
	return (*this);
}

/**********************************************/
/*			        DESTRUCTOR                */
/* ********************************************/
Brain::~Brain(void)
{
	std::cout << RED <<"Brain destructor called" << std::endl;
	return;
}