/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:46:21 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 14:38:00 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	zombieSeb("Seb");
	Zombie	*zombieBob = newZombie("Bob");
	
	zombieSeb.announce();
	randomChup("Jim");
	delete zombieBob;
}