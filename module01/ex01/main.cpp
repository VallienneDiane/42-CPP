/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:26 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 15:12:58 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int	i;
	int N = 5;
	Zombie* zombie = zombieHorde(N, "Bobby");
	
	i = -1;
	while(++i < N)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}