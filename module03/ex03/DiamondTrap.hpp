/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 14:59:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap & operator=(const DiamondTrap &src);
		~DiamondTrap(void);
		
		DiamondTrap(std::string name);
		void	whoAmI(void);
		using ScavTrap::attack;
};

#endif