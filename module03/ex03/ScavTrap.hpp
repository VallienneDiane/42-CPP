/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:10:28 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		ScavTrap & operator=(const ScavTrap &src);
		void	guardGate(void);
		void	attack(const std::string& target);
		~ScavTrap(void);
		
	protected:
		const int	_HP;
		const int	_EP;
		const int	_AD;
};

#endif