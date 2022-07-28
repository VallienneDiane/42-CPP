/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:04:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 17:58:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return;
}

Contact::~Contact( void ) {	
	return;
}

std::string	setField( std::string fieldName)
{
	std::string str;
	
	std::cout << "Enter the " + fieldName + " : ";
	while (std::getline(std::cin, str))
	{
		if (!str.empty())
			return (str);
		std::cout << "Enter the " + fieldName + " : ";
	}
	return (str);
}

void	Contact::setInfo( void )
{
	this->_firstName = setField("first name");
	this->_lastName = setField("last name");
	this->_nickName = setField("nick name");
	this->_phoneNumber = setField("phone number");
	this->_darkestSecret = setField("darkest secret");
}

void	checkStrWidth( std::string value)
{
	if (value.length() > 10)
		std::cout << value.substr(0, 9) + ".";
	else
		std::cout << value;
}

void	Contact::printInfo( void )
{
	std::cout << std::endl;
	std::cout << "--- Contact informations ---" << std::endl;
	std::cout << "First name : " + this->_firstName << std::endl;
	std::cout << "Last name : " + this->_lastName << std::endl;
	std::cout << "Nick name : " + this->_nickName << std::endl;
	std::cout << "Phone number : " + this->_phoneNumber << std::endl;
	std::cout << "Darkest secret : " + this->_darkestSecret << std::endl;
}

void	Contact::getInfo( int index )
{
	std::cout << std::endl;
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	checkStrWidth(this->_firstName);
	std::cout << "|";
	std::cout << std::setw(10);
	checkStrWidth(this->_lastName);
	std::cout << "|";
	std::cout << std::setw(10);
	checkStrWidth(this->_nickName);
	std::cout << "|";
	std::cout << std::endl;
}
