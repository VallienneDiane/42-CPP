/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:20:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 17:58:13 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {	
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

void	PhoneBook::createContact( int indexContact )
{
	this->contact[indexContact].setInfo();
}

void	PhoneBook::getContact( int indexContact )
{
	this->contact[indexContact].getInfo(indexContact);
}

void	PhoneBook::getOneContact( int indexContact )
{
	this->contact[indexContact].printInfo();
}