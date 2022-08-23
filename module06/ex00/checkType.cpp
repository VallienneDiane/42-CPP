/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:03:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/23 17:09:50 by dvallien         ###   ########.fr       */
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
