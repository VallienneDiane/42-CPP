/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertFloat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:10:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 17:16:43 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	floatToChar(float nb)
{
	if (nb < 32 || nb > 126)
		std::cout << "char : Non displayable " << std::endl;
	else
	{
		char c = static_cast<char>(nb);
		std::cout << "char : '" << c << "'" << std::endl;	
	}
}

void	floatToInt(std::string arg, float nb)
{
	long int overflow;
	
	if (arg.compare("-inff") == 0 || arg.compare("+inff") == 0 || arg.compare("inff") == 0)
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

void	floatToFloat(float nb, size_t j)
{
	std::cout << std::fixed;
	if (j > 7)
		j = 7;
	std::cout.precision(j);
	
	float number = static_cast<float>(nb);
	std::cout << "float : " << number << "f" << std::endl;
}

void	floatToDouble(float nb, size_t j)
{
	if (j > 15)
		j = 15;
	std::cout.precision(j);
	double number = static_cast<double>(nb);
	std::cout << "double : " << number << std::endl;
}

void	toNan(void)
{
	std::cout << "char : impossible " << std::endl;
	std::cout << "int : impossible " << std::endl;
	std::cout << "float : nanf " << std::endl;
	std::cout << "double : nan " << std::endl;
}

void	convertFloat(std::string arg)
{
	float nb;
	size_t j;
	size_t size = arg.length();

	nb = stof(arg);
	for(size_t i = 0; i < size; i++)
	{
		if (arg[i] == '.')
			for(j = 0; j < (size -i - 2); j++);
	}
	if (arg.compare("nanf") == 0)
	{
		toNan();
		return;
	}
	floatToChar(nb);
	floatToInt(arg, nb);
	floatToFloat(nb, j);
	floatToDouble(nb, j);
}