/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:57:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/24 14:48:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	toInt(char arg)
{
	int nb = static_cast<int>(arg);
	std::cout << "char to nb : " << nb << std::endl;
}

void	toFloat(char arg)
{
	std::cout << std::fixed;
	std::cout.precision(1);
	
	float nb = static_cast<float>(arg);
	std::cout << "char to float : " << nb << "f" << std::endl;
}

void	toDouble(char arg)
{
	double nb = static_cast<double>(arg);
	std::cout << "char to double : " << nb << std::endl;
}

void	convertChar(std::string arg)
{
	toInt(arg[0]);
	toFloat(arg[0]);
	toDouble(arg[0]);
}
