/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:43:26 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 13:58:11 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vInt(3);
	std::vector<int> vInt2(10, 95); // 10 values initialize at 2
	std::list<int> lInt;
	std::vector<char> vChar(4);
	std::list<int> lChar(4);
	
	vInt[0] = 14;
	vInt[1] = 28;
	vInt[2] = 35;
	lInt.push_back(14);
	lInt.push_back(15);
	vChar[0] = 'h';
	vChar[1] = 'e';
	vChar[2] = 'l';
	vChar[3] = 'l';
	lChar.push_back('b');
	lChar.push_back('e');
	lChar.push_back('e');
	lChar.push_back('s');
	std::cout << "--------------- Find int : vector ---------------" << std::endl;
	try
	{
		easyfind(vInt, 35);
		easyfind(vInt2, 95);
		easyfind(vInt, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "--------------- Find char : vector ---------------" << std::endl;
	try
	{
		easyfind(vChar, 'e');
		easyfind(vChar, 'f');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "--------------- Find int : list ---------------" << std::endl;
	try
	{
		easyfind(lInt, 14);
		easyfind(lInt, 16);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "--------------- Find char : list ---------------" << std::endl;
	try
	{
		easyfind(lChar, 'b');
		easyfind(lChar, 'o');
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}