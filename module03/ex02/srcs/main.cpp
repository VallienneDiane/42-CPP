/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:18:40 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 11:34:37 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"

int main(void)
{
	FragTrap	unamed;
	FragTrap	badGuy("Gargamel");
	ScavTrap	grumpyGuy("SchtroumpfGrognon");
	ScavTrap	cat("Azrael");
	ClapTrap	target("GrandSchtroumpf");
	ClapTrap	veryBadGuy(badGuy);
	
	std::cout << std::endl;
	veryBadGuy.attack(unamed.getName());
	unamed.takeDamage(30);
	unamed.setName("Joe");
	unamed.beRepaired(10);
	std::cout << std::endl;
	cat.attack(unamed.getName());
	unamed.takeDamage(20);
	unamed.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		veryBadGuy.attack(grumpyGuy.getName());
		grumpyGuy.takeDamage(30);
	}
	badGuy.attack(grumpyGuy.getName());
	grumpyGuy.takeDamage(30);
	grumpyGuy.beRepaired(10);
	std::cout << std::endl;
	grumpyGuy.attack(cat.getName());
	cat.guardGate();
	std::cout << std::endl;
	target.attack(badGuy.getName());
	std::cout << std::endl;
	badGuy.attack(target.getName());
	target.takeDamage(30);
	target.beRepaired(30);
	std::cout << std::endl;
	badGuy.highFivesGuys();
	std::cout << std::endl;
	return (0);
}