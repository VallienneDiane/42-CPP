/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:40:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:58:29 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie{

	private:
		std::string	_name;
	
	public:
		Zombie( void );
		~Zombie( void );
		void	announce( void );
		void	setName(std::string name);
};
Zombie* zombieHorde( int N, std::string name);

#endif