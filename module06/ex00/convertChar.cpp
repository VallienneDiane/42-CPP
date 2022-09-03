/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:37:21 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 11:10:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	charToChar(char arg)
{
	char c = static_cast<char>(arg);
	std::cout << "char : " << c << std::endl;
}

void	charToInt(char arg)
{
	int nb = static_cast<int>(arg);
	std::cout << "nb : " << nb << std::endl;
}

void	charToFloat(char arg)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	
	float nb = static_cast<float>(arg);
	std::cout << "float : " << nb << "f" << std::endl;
}

void	charToDouble(char arg)
{
	double nb = static_cast<double>(arg);
	std::cout << "double : " << nb << std::endl;
}

void	convertChar(std::string arg)
{
	charToChar(arg[0]);
	charToInt(arg[0]);
	charToFloat(arg[0]);
	charToDouble(arg[0]);
}