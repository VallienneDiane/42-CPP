/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 14:45:13 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int ac, char **av )
{
	Harl		harl;
	std::string level;
	
	if (ac == 2)
	{
		level = av[1];
		harl.complain(level);
	}
	else
		std::cout << "Usage : ./harlFilter \"<DEBUG> or <INFO> or <WARNING> or <ERROR>\""<< std::endl;
	return (0);
}