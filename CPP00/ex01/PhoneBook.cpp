/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:20:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/13 11:19:58 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::addContact( void ) 
{
	int	i;

	i = 0;
	while (i < 8)
	{
		this->contact[i] = ;
	}
	PhoneBook::_nb_contact++;
}

PhoneBook::PhoneBook( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}