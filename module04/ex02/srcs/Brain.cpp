/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:44:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 10:33:43 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"
#include "../incs/Animal.hpp"
/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Brain::Brain(void)
{
	std::cout << RED << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << RED <<"Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(const Brain &src)
{
	std::cout << RED <<"Brain copy assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}
/**********************************************/
/*			      SETTER / GETTER             */
/* ********************************************/
void		Brain::setIdea(unsigned i, std::string idea)
{
	if (i >= 100)
		std::cout << "Sorry no place for such idea ..." << std::endl;
	else
		this->_ideas[i] = idea;
}

std::string Brain::getIdea(unsigned i) const
{
	if (i >= 100)
	{
		std::cout << "You have 100 ideas in this brain, no less no more !" << std::endl;
		return("");	
	}
	return (this->_ideas[i]);
}
/**********************************************/
/*			        DESTRUCTOR                */
/* ********************************************/
Brain::~Brain(void)
{
	std::cout << RED <<"Brain destructor called" << std::endl;
}