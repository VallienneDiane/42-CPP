/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:04:05 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/18 13:47:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void ) {
	
	std::cout << "Constructor called" << std::endl;
	return;
}

std::string	Contact::set_info()
{
	std::cout << std::endl;
	std::cout << "Enter the first name : ";
	std::cin >> this->_firstName;
	return (0);
}

Contact::~Contact( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return;
}