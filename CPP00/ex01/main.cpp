/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:23:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/18 13:24:29 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"


int	main()
{
	PhoneBook	phoneBook;
	std::string input;
	int			i;

	i = 0;
	std::cout << std::endl;
	std::cout << "Welcome, here you can : " << std::endl;
	std::cout << "ADD a new contact, SEARCH one contact, or EXIT the phonebook" << std::endl;
	std::cout << "Your choice : ";
	std::cin >> input; // OU getline(std::cin, input)
	if(input == "ADD") // if(input.compare("ADD") == 0) 
	{
		phoneBook.addContact(i);
		if (i == 7)
			i = 0;
		else
			i++;
	}	
	// else if(input.compare("SEARCH") == 0)
	// 	//searchContact();
	// else if(input.compare("EXIT") == 0)
	// 	return (0);
	else
		return(EXIT_SUCCESS);
}