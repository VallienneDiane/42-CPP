/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:49:35 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 17:04:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		Character & operator=(const Character &src);
		std::string const & getName(void) const;
		// void equip(AMateria* m);
		// void unequip(int idx);
		// void use(int idx, Character& target);
		~Character(void);

	private:
		std::string	_name;
		// AMateria*	_inventory[4];
};

#endif