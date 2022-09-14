/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 16:32:14 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Sword");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Knife");
		bob.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("Saber");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("Gun");
		jim.attack();
	}
	return (0);
}