/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:44:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 14:57:31 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		const int	_HP;
		const int	_EP;
		const int	_AD;
		
	public:
		FragTrap(void);
		FragTrap(const FragTrap &src);
		FragTrap & operator=(const FragTrap &src);
		~FragTrap(void);
		
		FragTrap(std::string name);
		void	highFivesGuys(void);
};

#endif