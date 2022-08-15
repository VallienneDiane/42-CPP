/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:44:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 16:10:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	return;
}

Brain & Brain::operator=(const Brain &src)
{
	int i = 0;
	while (i++ < 100)
		this->_ideas[i] = src.getIdea(i);
	return (*this);
}

void	Brain::setIdea(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

Brain::~Brain(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}