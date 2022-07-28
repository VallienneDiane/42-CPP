/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:04:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 13:19:39 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return;
}

Contact::~Contact( void ) {	
	return;
}

std::string	set_field( std::string field_name)
{
	std::string str;
	
	std::cout << "Enter the " + field_name + " : ";
	while (std::getline(std::cin, str))
	{
		if (!str.empty())
			return (str);
		std::cout << "Enter the " + field_name + " : ";
	}
	return (str);
}

void	Contact::set_info( void )
{
	this->_firstName = set_field("first name");
	this->_lastName = set_field("last name");
	this->_nickName = set_field("nick name");
	this->_phoneNumber = set_field("phone number");
	this->_darkestSecret = set_field("darkest secret");
}

void	check_str_wide( std::string value)
{
	if (value.length() > 10)
		std::cout << value.substr(0, 9) + ".";
	else
		std::cout << value;
}

void	Contact::print_info( void )
{
	std::cout << std::endl;
	std::cout << "--- Contact informations ---" << std::endl;
	std::cout << "First name : " + this->_firstName << std::endl;
	std::cout << "Last name : " + this->_lastName << std::endl;
	std::cout << "Nick name : " + this->_nickName << std::endl;
	std::cout << "Phone number : " + this->_phoneNumber << std::endl;
	std::cout << "Darkest secret : " + this->_darkestSecret << std::endl;
}

void	Contact::get_info( int index )
{
	std::cout << std::endl;
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	check_str_wide(this->_firstName);
	std::cout << "|";
	std::cout << std::setw(10);
	check_str_wide(this->_lastName);
	std::cout << "|";
	std::cout << std::setw(10);
	check_str_wide(this->_nickName);
	std::cout << "|";
	std::cout << std::endl;
}
