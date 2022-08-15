/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:18:40 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:26:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap	target("Schtroumpfette");
	DiamondTrap	diamondCat("Azrael");

	std::cout << std::endl;
	// Repairs
	diamondCat.takeDamage(30);
	diamondCat.beRepaired(10);
	diamondCat.beRepaired(10);
	std::cout << std::endl;

	// Attacks
	diamondCat.attack(target.getName());
	std::cout << std::endl;

	// New class personal method call
	diamondCat.guardGate();
	diamondCat.highFivesGuys();
	diamondCat.whoAmI();
	std::cout << std::endl;

	// Take damage
	diamondCat.takeDamage(30);
	diamondCat.takeDamage(30);
	diamondCat.takeDamage(30);
	std::cout << std::endl;

	// Die
	diamondCat.takeDamage(30);
	std::cout << std::endl;

	// Do something after dying
	diamondCat.beRepaired(20);
	diamondCat.attack(target.getName());
	std::cout << std::endl;
	return (0);
}