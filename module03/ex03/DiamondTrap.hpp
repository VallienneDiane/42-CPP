/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:06:24 by dvallien         ###   ########.fr       */
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
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap & operator=(const DiamondTrap &src);
		~DiamondTrap(void);
		void	whoAmI(void);
		using ScavTrap::attack;

	private:
		std::string	_name;
};

#endif