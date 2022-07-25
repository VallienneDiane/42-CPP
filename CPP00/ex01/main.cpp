/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:23:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/25 17:00:06 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

void	print_menu( void )
{
	std::cout << std::endl;
	std::cout << "Welcome into your phonebook, here you can " << std::endl;
	std::cout << std::endl;
	std::cout << "- ADD a new contact" << std::endl;
	std::cout << "- SEARCH one contact" << std::endl;
	std::cout << "- EXIT the phonebook" << std::endl;
	std::cout << std::endl;
	std::cout << "Make your choice : ";
}

void	print_header( void )
{
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nick name";
	std::cout << "|";
}

void	display_contact(int index)
{
	while (index < 0 || index > 7)
	{
		std::cout << "Choose an index : ";
		std::cin.clear();
		std::cin >> index;
	}
}

int	main()
{
	PhoneBook	phoneBook;
	std::string input;
	int			nbContact;
	int			i;
	int			index;

	nbContact = 0;
	index = 0;
	while (1)
	{
		print_menu();
		getline(std::cin, input);
		if(input == "ADD") // if(input.compare("ADD") == 0) 
		{
			phoneBook.contact[nbContact].set_info();
			if (nbContact == 7)
				nbContact = 0;
			else
				nbContact++;
		}
		else if (input == "SEARCH")
		{
			print_header();
			i = 0;
			while (i < 8)
			{
				phoneBook.contact[i].get_info(i);
				i++;
			}
			std::cout << std::endl;
			std::cout << "Choose an index : ";
			std::cin >> index;
			display_contact(index);
			phoneBook.contact[index].get_info(index);
		}
	}
	return (0);
}