/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:03:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/24 14:08:10 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool	isChar(std::string arg)
{
	if (arg.length() == 1 && isalpha(arg[0]))
		return true;
	return false;
}

bool	isNum(std::string arg)
{
	size_t i;

	if (arg.length() == 1 && isdigit(arg[0]))
		return true;
	i = 0;
	while (i < arg.length())
	{
		if (arg[i] == '-' && i == 0)
			i++;
		if (!isdigit(arg[i]))
			return false;
		i++;
	}
	return true;
}

bool	isLitteralFloat(std::string arg)
{
	if (arg.compare("-inff") == 0 | arg.compare("+inff") == 0 | arg.compare("nanf") == 0)
		return true;
	return false;
}

bool	isFloat(std::string arg)
{
	int	size;
	int dot;
	bool negative;

	dot = 0;
	size = arg.length();
	if (isLitteralFloat(arg))
		return true;
	for (int i = 0; i < size; i++)
	{
		if (arg[i] == '.')
			dot++;
	}
	negative = false;
	for (int i = 0; i < size; i++)
	{
		if (arg[i] == '-' && i == 0)
		{
			i++;
			negative = true;
		}
		if ((i == 0 && arg[i] == '.' && negative == false) | (i == 1 && arg[i] == '.' && negative == true))
			return false;
		if (dot != 1)
			return false;
		if (i == (size - 2) && arg[i] == '.')
			return false;
		if (!isdigit(arg[i]) && arg[i] != '.' && i != size - 1)
			return false;
		if (arg[size - 1] != 'f')
			return false;
	}
	return true;
}

bool	isLitteralDouble(std::string arg)
{
	if (arg.compare("-inf") == 0 | arg.compare("+inf") == 0 | arg.compare("nan") == 0)
		return true;
	return false;
}

bool	isDouble(std::string arg)
{
	int	size;
	int dot;
	bool negative;

	dot = 0;
	size = arg.length();
	if (isLitteralDouble(arg))
		return true;
	for (int i = 0; i < size; i++)
	{
		if (arg[i] == '.')
			dot++;
	}
	negative = false;
	for (int i = 0; i < size; i++)
	{
		if (arg[i] == '-' && i == 0)
		{
			i++;
			negative = true;
		}
		if ((i == 0 && arg[i] == '.' && negative == false) | (i == 1 && arg[i] == '.' && negative == true))
			return false;
		if (dot != 1)
			return false;
		if (i == (size - 1) && arg[i] == '.')
			return false;
		if (!isdigit(arg[i]) && arg[i] != '.')
			return false;
	}
	return true;
}
