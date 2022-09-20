/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:38:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 13:23:07 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"

/* Virtual inheritance ensures that only one copy of a base class’s member variables are inherited by derivated classes.*/
/* DiamonTrap inherit from ScavTrap and FragTrap which virtual inherit from ClapTrap */
/* so DiamonTrap will contain only one set of the member variables from ClapTrap */

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
};

#endif