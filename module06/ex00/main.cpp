/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:25:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 17:05:09 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	checkType(std::string arg)
{
	if (isChar(arg))
		convertChar(arg);
	else if (isNum(arg))
	{
		convertInt(arg);
	}
	else if (isFloat(arg))
		convertFloat(arg);
	else if (isDouble(arg))
		convertDouble(arg);
	else
		std::cout << "Error : conversion not possible" << std::endl;
}

int main(int ac, char **av)
{
	std::string arg;
	
	if (ac != 2)
	{
		std::cout << "Error : invalid input" << std::endl;
		return (0);
	}
	arg = av[1];
	if (arg.empty() == true)
	{
		std::cout << "Error : empty input" << std::endl;
		return (0);
	}
	if (arg.length() > 19 || (arg[0] == '-' && arg.length() > 20))
	{
		std::cout << "Error : input too large" << std::endl;
		return (0);
	}	
	checkType(arg);
	return (0);
}