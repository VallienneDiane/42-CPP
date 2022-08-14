/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 15:36:42 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		using ScavTrap::_energyPoints;
		using ScavTrap::attack;
		using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap & operator=(const DiamondTrap &src);
		~DiamondTrap(void);
		void	whoAmI(void);

	private:
		std::string	_name;
};

#endif