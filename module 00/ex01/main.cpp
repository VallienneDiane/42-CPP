/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:23:14 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/31 11:24:52 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	printMenu( void )
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

void	printHeader( void )
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

int	isDigit( std::string fieldIndex )
{
	int			i;

	i = 0;
	while (fieldIndex[i])
	{
		if (!isdigit(fieldIndex[i]))
			return (1);
		i++;
	}
	return (0);
}

int checkIndex(void)
{
	std::string fieldIndex;

	while (std::getline(std::cin, fieldIndex))
	{
		if (fieldIndex.empty() || isDigit(fieldIndex) == 1 || fieldIndex.size() > 1)
			std::cout << "Choose an index : ";
		else if (std::stoi(fieldIndex) < 0 || std::stoi(fieldIndex) > 7)
			std::cout << "Choose an index : ";
		else
			return (std::stoi(fieldIndex));
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
		printMenu();
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			phoneBook.setContact(nbContact);
			if (nbContact == 7)
				nbContact = 0;
			else
				nbContact++;
		}
		else if (input == "SEARCH")
		{
			printHeader();
			i = -1;
			while (++i < 8)
				phoneBook.getContact(i);
			std::cout << std::endl;
			std::cout << "Choose an index : ";
			index = checkIndex();
			phoneBook.getOneContact(index);
		}
		else if (input == "EXIT")
			return (0);
	}
	return (0);
}