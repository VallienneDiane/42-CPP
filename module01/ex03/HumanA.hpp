/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:28 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:58:50 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

class HumanA{
	
	private :
		std::string _name;
		Weapon		&_weapon;
	
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void	attack( void );
};

#endif