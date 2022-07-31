/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/31 16:01:25 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("sword");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("knife");
		bob.attack();
	}
	{
		Weapon club = Weapon("saber");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("gun");
		jim.attack();
	}
	return (0);
}