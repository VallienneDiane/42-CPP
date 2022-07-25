/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:04:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/25 16:31:25 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact( void ) {
	// std::cout << "Constructor called" << std::endl;
	// return;
}

Contact::~Contact( void ) {	
	// std::cout << "Destructor called" << std::endl;
	// return;
}

void	Contact::set_info( void )
{
	std::cout << std::endl;
	std::cout << "Enter the first name : ";
	getline(std::cin, this->_firstName);
	if (this->_firstName.empty() == 1)
		std::cout << "Enter the first name :" << std::endl;
	std::cout << "Enter the last name : ";
	getline(std::cin, this->_lastName);
	std::cout << "Enter the nick name : ";
	getline(std::cin, this->_nickName);
	std::cout << "Enter the phone number : ";
	getline(std::cin, this->_phoneNumber);
	std::cout << "Enter the darkest secret : ";
	getline(std::cin, this->_darkestSecret);
}

void	check_str_wide( std::string value)
{
	if (value.length() > 10)
		std::cout << value.substr(0, 9) + ".";
	else
		std::cout << value;
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
