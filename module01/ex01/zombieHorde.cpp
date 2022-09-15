/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:50 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 15:13:22 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (0);
	Zombie* newZombie = new Zombie[N];
	int	i = 0;
	while (N > i)
	{
		newZombie[i].setName(name);
		std::cout << name << " has been created" << std::endl;
		i++;
	}
	return(newZombie);
}