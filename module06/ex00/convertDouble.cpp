/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertDouble.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:03:41 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 10:48:17 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	doubleToChar(double nb)
{
	if (nb < 32 || nb > 126)
		std::cout << "char : Non displayable " << std::endl;
	else
	{
		char c = static_cast<char>(nb);
		std::cout << "char : '" << c << "'" << std::endl;	
	}
}

void	doubleToInt(std::string arg, double nb)
{
	long int overflow;
	
	if (arg.compare("-inf") == 0 || arg.compare("+inf") == 0 || arg.compare("inf") == 0)
	{
		std::cout << "int : Non displayable " << std::endl;
		return;	
	}
	overflow = stol(arg);
	if (overflow < INT_MIN || overflow > INT_MAX)
	{
		std::cout << "int : Non displayable" << std::endl;
		return;
	}
	int number = static_cast<int>(nb);
	std::cout << "int : " << number << std::endl;
}

void	doubleToFloat(double nb, size_t j)
{
	std::cout << std::fixed;
	if (j > 7)
		j = 7;
	std::cout.precision(j);
	float number = static_cast<float>(nb);
	std::cout << "float : " << number << "f" << std::endl;
}

void	doubleToDouble(double nb, size_t j)
{
	if (j > 15)
		j = 15;
	std::cout.precision(j);
	double number = static_cast<double>(nb);
	std::cout << "double : " << number << std::endl;
}

void	convertDouble(std::string arg)
{
	double nb;
	size_t j;
	size_t size = arg.length();
	
	nb = stod(arg);
	for(size_t i = 0; i < size; i++)
	{
		if (arg[i] == '.')
			for(j = 0; j < (size -i - 1); j++);
	}
	if (arg.compare("nan") == 0)
	{
		toNan();
		return;
	}
	doubleToChar(nb);
	doubleToInt(arg, nb);
	doubleToFloat(nb, j);
	doubleToDouble(nb, j);
}
