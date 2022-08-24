/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:25:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/24 14:41:30 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	checkType(std::string arg)
{
	if (isChar(arg))
	{
		std::cout << "it's a char" << std::endl; 
		convertChar(arg);
	}
	else if (isNum(arg))
	{
		std::cout << "it's an int" << std::endl; 
		//convertInt(arg);
	}
	else if (isFloat(arg))
	{
		std::cout << "it's a float" << std::endl;	
		//convertInt(arg);
	}
	else if (isDouble(arg) == true)
	{
		std::cout << "it's a double" << std::endl;	
		//convertInt(arg);
	}
	else
		std::cout << "This conversion isn't possible" << std::endl;
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
	std::cout << arg.length() << std::endl;
	if (arg.empty() == true)
	{
		std::cout << "Error : empty input" << std::endl;
		return (0);
	}
	checkType(arg);
	return (0);
}