/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:57:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

class HumanB{
	
	private :
		std::string _name;
		Weapon		*_weapon;
		
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void ) const;
		void	setWeapon( Weapon &weapon );
};

#endif