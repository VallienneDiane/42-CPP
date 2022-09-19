/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:19:28 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 14:54:36 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"

class ClapTrap{

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &src);
		ClapTrap & operator=(const ClapTrap &src);
		~ClapTrap(void);
		
		ClapTrap(std::string name);
		void		setName(std::string name);
		void		setHitP(int hitPoints);
		void		setEnergyP(int energyPoints);
		void		setAttackP(int attackDamage);
		std::string	getName(void) const;
		int			getHitP(void) const;
		int			getEnergyP(void) const;
		int			getAttackD(void) const;
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif