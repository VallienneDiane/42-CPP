/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:42:50 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 17:12:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	int	i;
	Zombie* newZombie = new Zombie[N];

	i = 0;
	while (N > i)
	{
		newZombie[i].setName(name);
		std::cout << name << " has been created" << std::endl;
		i++;
	}
	return(newZombie);
}