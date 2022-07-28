/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:23:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 13:19:25 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_digit( std::string field_index )
{
	int			i;

	i = 0;
	while (field_index[i])
	{
		if (!isdigit(field_index[i]))
			return (1);
		i++;
	}
	return (0);
}

int check_index(void)
{
	std::string field_index;

	while (std::getline(std::cin, field_index))
	{
		if (field_index.empty() || is_digit(field_index) == 1 || field_index.size() > 1)
			std::cout << "Choose an index : ";
		else if (std::stoi(field_index) < 0 || std::stoi(field_index) > 7)
			std::cout << "Choose an index : ";
		else
			return (std::stoi(field_index));
		std::cin.clear();
	}
	return (0);
}

int	main()
{
	PhoneBook	phoneBook;
	std::string input;
	int			index;
	int			nbContact;
	int			i;


	index = 0;
	nbContact = 0;
	while (1 && !std::cin.eof())
	{
		print_menu();
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			phoneBook.create_contact(nbContact);
			if (nbContact == 7)
				nbContact = 0;
			else
				nbContact++;
		}
		else if (input == "SEARCH")
		{
			print_header();
			i = -1;
			while (++i < 8)
				phoneBook.get_contact(i);
			std::cout << std::endl;
			std::cout << "Choose an index : ";
			index = check_index();
			phoneBook.get_one_contact(index);
		}
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}