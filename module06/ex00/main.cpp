/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:25:06 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:06:30 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "main.hpp"

/*The static_cast is used for the ordinary type conversion (explicit or implicit) */
void	checkType(std::string arg)
{
	if (isChar(arg))
		convertChar(arg);
	else if (isNum(arg))
		convertInt(arg);
	else if (isFloat(arg))
		convertFloat(arg);
	else if (isDouble(arg))
		convertDouble(arg);
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
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
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
		return (0);
	}
	checkType(arg);
	return (0);
}