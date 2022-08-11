/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:18:40 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/11 16:29:28 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	unamed;
	ScavTrap	badGuy("Gargamel");
	ScavTrap	grumpyGuy("SchtroumpfGrognon");
	ScavTrap	cat("Azrael");
	ScavTrap	cpycat(cat);
	ClapTrap	target("GrandSchtroumpf");
	ClapTrap	veryBadGuy(badGuy);
	
	std::cout << std::endl;
	veryBadGuy.attack(unamed.getName());
	unamed.takeDamage(20);
	unamed.setName("Joe");
	unamed.beRepaired(10);
	std::cout << std::endl;
	cpycat.attack(unamed.getName());
	unamed.takeDamage(20);
	unamed.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		veryBadGuy.attack(grumpyGuy.getName());
		grumpyGuy.takeDamage(20);
	}
	badGuy.attack(grumpyGuy.getName());
	grumpyGuy.takeDamage(20);
	grumpyGuy.beRepaired(10);
	std::cout << std::endl;
	grumpyGuy.attack(cat.getName());
	cat.guardGate();
	std::cout << std::endl;
	target.attack(badGuy.getName());
	std::cout << std::endl;
	badGuy.attack(target.getName());
	target.takeDamage(20);
	target.beRepaired(30);
	std::cout << std::endl;
	return (0);
}