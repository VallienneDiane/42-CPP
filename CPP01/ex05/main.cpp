/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/06 16:09:51 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main( int ac, char **av )
{
	Harl		harl;
	std::string level;
	
	(void)ac;
	(void)av;

	if (ac == 2)
	{
		level = av[1];
		harl.complain(level);
	}
	else
		std::cout << "Error : wronng number of arguments" << std::endl;
	return (0);
}