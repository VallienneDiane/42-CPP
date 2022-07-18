/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:20:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/18 13:47:13 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	PhoneBook::addContact( int i ) 
{
	while (i < 8)
	{
		this->_contact[i].set_info() = ;
		i++;
	}
	this->_nbContact++;
}

PhoneBook::PhoneBook( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}