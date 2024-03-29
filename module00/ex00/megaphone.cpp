/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:07:01 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 17:53:08 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void	toUpper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			toUpper(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
