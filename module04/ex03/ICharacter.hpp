/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:29:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/17 16:42:38 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H
# include <iostream>
# include <string>
# include "AMateria.hpp"
class AMateria;
/**********************************************/
/*			       Interface                  */
/*			-> only pure methods              */
/*			-> can't have an attribute        */
/*			-> define a behavior              */
/* ********************************************/
class ICharacter
{
	public:
		virtual ~ICharacter(void) {}
		virtual std::string const & getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif