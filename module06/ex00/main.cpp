/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:25:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/23 17:01:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
# include "checkType.cpp"

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
	if (isChar(arg))
		std::cout << "it's a char" << std::endl; // convertChar(av[1]);
	if (isNum(arg))
		std::cout << "it's a number" << std::endl; //convertInt(av[1]);
	else
		std::cout << "it's nothing" << std::endl;
	// else if (isFloat(arg) == true)
	// 	std::cout << "it's a float" << std::endl;	//convertInt(av[1]);
	// else if (isDouble(arg) == true)
	// 	std::cout << "it's a double" << std::endl;	//convertInt(av[1]);
		
	return (0);
}