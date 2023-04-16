/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 14:58:19 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{	
	protected:
		const int	_HP;
		const int	_EP;
		const int	_AD;
		
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
		ScavTrap & operator=(const ScavTrap &src);
		~ScavTrap(void);
		
		ScavTrap(std::string name);
		void	guardGate(void);
		void	attack(const std::string& target);
};

#endif