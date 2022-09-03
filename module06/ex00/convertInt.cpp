/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:36:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 17:12:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	intToChar(int nb)
{
	if (nb < 32 || nb > 126)
		std::cout << "char : Non displayable " << std::endl;
	else
	{
		char c = static_cast<char>(nb);
		std::cout << "char : '" << c << "'" << std::endl;	
	}
}

void	intToInt(int nb)
{
	int number = static_cast<int>(nb);
	std::cout << "int : " << number << std::endl;
}

void	intToFloat(int nb)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	
	float number = static_cast<float>(nb);
	std::cout << "float : " << number << "f" << std::endl;
}

void	intToDouble(int nb)
{
	double number = static_cast<double>(nb);
	std::cout << "double : " << number << std::endl;
}

void	convertInt(std::string arg)
{
	long int nb;
	
	nb = stol(arg);
	if (nb < INT_MIN || nb > INT_MAX)
	{
		std::cout << "Error : int overflow" << std::endl;
		return;
	}
	intToChar(nb);
	intToInt(nb);
	intToFloat(nb);
	intToDouble(nb);
}
