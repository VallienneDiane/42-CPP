/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 16:58:31 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie{
	
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name);

#endif