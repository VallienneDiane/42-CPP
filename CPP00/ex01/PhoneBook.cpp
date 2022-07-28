/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:20:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 11:49:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {	
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

void	PhoneBook::create_contact( int index_contact )
{
	this->contact[index_contact].set_info();
}

void	PhoneBook::get_contact( int index_contact )
{
	this->contact[index_contact].get_info(index_contact);
}

void	PhoneBook::get_one_contact( int index_contact )
{
	this->contact[index_contact].print_info();
}