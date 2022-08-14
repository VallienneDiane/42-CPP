/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/14 15:57:17 by dvallien         ###   ########.fr       */
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
		static const int	HP = 100;
		static const int	AD = 30;
		~FragTrap(void);
};

#endif