/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:04:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/13 11:52:06 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

std::string	Contact::get_last_name()
{
	return this->first_name;
}

std::string	Contact::get_nick_name()
{
	return this->first_name;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

std::string	Contact::get_first_name()
{
	return this->first_name;
}

Contact::~Contact( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}