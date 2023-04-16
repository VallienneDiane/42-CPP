/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:21:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 12:15:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	try
	{
		std::cout << "--------- Empty tab ---------" << std::endl;
		Array<int>	emptyTab;

		std::cout << "size: " << emptyTab.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << std::endl;
		std::cout << "-- String tab & ref tab & copy tab --" << std::endl;
		Array<std::string> tabString(2);
		Array<std::string> &refTab = tabString;
		
		tabString[0] = "hello";
		tabString[1] = "you";
		Array<std::string> copyTab(tabString);
		std::cout << tabString[0] << ' ' << tabString[1] << ", size: " << tabString.size() << std::endl;
		std::cout << refTab[0] << ' ' << refTab[1] << ", size: " << refTab.size() << std::endl;
		std::cout << copyTab[0] << ' ' << copyTab[1] << ", size: " << copyTab.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << std::endl;
		std::cout << "--------- Int tab ---------" << std::endl;
		Array<int> tabInt(1);
		
		tabInt[0] = 185;
		const Array<int> tabInt2 = tabInt;
		std::cout << tabInt[0] << ", size: " << tabInt.size() << std::endl;
		std::cout << tabInt2[0] << ", size: " << tabInt2.size()<< std::endl;
		std::cout << tabInt[-8] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "--------- Char tab ---------" << std::endl;
		Array<char> tabChar(2);
		
		tabChar[0] = 'c';
		tabChar[1] = 'z';
		
		std::cout <<"size: " << tabChar.size() << std::endl;
		std::cout << tabChar[0] << ", " << tabChar[1] << std::endl;
		std::cout << tabChar[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
