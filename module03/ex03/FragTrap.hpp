/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 13:05:26 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		FragTrap & operator=(const FragTrap &src);
		void	highFivesGuys(void);
		~FragTrap(void);
		
	protected:
		const int	_HP;
		const int	_EP;
		const int	_AD;
		
};

#endif