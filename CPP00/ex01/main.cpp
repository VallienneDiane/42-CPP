/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:23:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/13 11:37:29 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"


int	main()
{
	PhoneBook	phoneBook;
	std::string input;

	std::cout << "Welcome into the magical Phonebook, here you can" << std::endl;
	std::cout << "-- ADD a new contact" << std::endl;
	std::cout << "-- SEARCH to display one specific contact" << std::endl;
	std::cout << "-- EXIT the phonebook and erase all contacts" << std::endl;
	std::cout << "Make your choice : ";
	std::cin >> input; // OU getline(std::cin, input)
	if(input == "ADD") // if(input.compare("ADD") == 0) 
		phoneBook.addContact();	
	// else if(input.compare("SEARCH") == 0)
	// 	//searchContact();
	// else if(input.compare("EXIT") == 0)
	// 	//exit();
	else
		return(EXIT_SUCCESS);
}