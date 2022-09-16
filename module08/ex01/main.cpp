/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:50 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 13:54:56 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << "------------ FIVE ELEMENTS ADDED ------------" << std::endl;
	try
	{
		Span sp1 = Span(5);

		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		sp1.addNumber(6);

		std::cout << "Shortest " << sp1.shortestSpan() << std::endl;
		std::cout << "Longest  " << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "------------ TOO MANY ELEMENTS ADDED ------------" << std::endl;
	try
	{
		Span sp2 = Span(6);
		
		sp2.addNumber(3);
		sp2.addNumber(6);
		sp2.addNumber(9);
		sp2.addNumber(89);
		sp2.addNumber(49);
		sp2.addNumber(11);
		sp2.addNumber(17);

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "------------ NOT ENOUGH ELEMENTS  ------------" << std::endl;
	try
	{
		Span sp3 = Span(1);
		
		sp3.addNumber(3);

		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "------------ USE ITERATORS  ------------" << std::endl;
	try
	{
		Span sp4 = Span(100);
		
		std::vector<int> tab(100, 10);
		tab[0] = 18;
		sp4.addNumber(tab.begin(), tab.end());

		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}