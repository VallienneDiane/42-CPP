/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:21:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/13 17:49:49 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	
	std::cout << "--------- Copy Ref tab ---------" << std::endl;
	Array<std::string> tabString(2);
	Array<std::string> &refTab = tabString;
	tabString = refTab;
	
	tabString[0] = "hello";
	tabString[1] = "you";
	(void)refTab;
	std::cout << tabString[0] << ' ' << tabString[1] << std::endl;
	std::cout << "--------- Int tab ---------" << std::endl;
	try
	{
		Array<int> tabInt(1);
		
		tabInt[0] = 185;
		const Array<int> tabInt2 = tabInt;
		std::cout << tabInt[0] << std::endl;
		std::cout << tabInt2[0] << std::endl;
		std::cout << tabInt[-8] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------- Char tab ---------" << std::endl;
	try
	{
		Array<char> tabChar(2);
		
		tabChar[0] = 'c';
		tabChar[1] = 'z';
		
		std::cout << tabChar[0] << ' ' << tabChar[1] << std::endl;
		std::cout << tabChar[2] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------- String tab && Copy string tab ---------" << std::endl;
	try
	{
		Array<std::string> tabString(2);
		
		tabString[0] = "salut";
		tabString[1] = "toi";

		Array<std::string> copyTab(tabString);
		std::cout << "String tab : " << tabString[0] << ' ' << tabString[1] << std::endl;
		std::cout << "Copy : " << copyTab[0] << ' ' << copyTab[1] << std::endl;
		std::cout << tabString[15] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
}
