/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:04:43 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:37:38 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	toUpper(char &c)
{
	c = toupper(c);
	std::cout << c << ' ';
}

int	main(void)
{
	int			tab[] = {1, 2, 3, 4, 5, 6};
	char		charTab[] = {'h', 'e', 'l', 'l', 'o'};
	std::string	strTab[] = {"oiseau", "caillou", "ananas", "tonnerre", "cornichon"};
	
	::iter(tab, 6, printTab);
	std::cout << std::endl;
	::iter(strTab, 5, printTab);
	std::cout << std::endl;
	::iter(charTab, 5, printTab);
	std::cout << std::endl;
	::iter(charTab, 5, toUpper);

	std::cout << std::endl;
	std::cout << "-- Correction test -- " << std::endl;
	int tab1[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab1, 5, print);
	iter(tab2, 5, print);
}
