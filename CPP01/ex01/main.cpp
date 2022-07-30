/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:26 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 17:13:18 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int	i;
	Zombie* zombie = zombieHorde(5, "Bobby");
	
	i = -1;
	while(++i < 5)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}