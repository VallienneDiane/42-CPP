/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:33:42 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:59:18 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon{

	private:
		std::string _type;

	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		const std::string	&getType( void );
		void				setType( std::string new_type );
};

#endif