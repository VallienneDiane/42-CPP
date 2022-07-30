/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:46:33 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/30 14:14:53 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie{
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );

	private:
		std::string	_name;
};

Zombie* newZombie( std::string name );
void	randomChup( std::string name );

#endif