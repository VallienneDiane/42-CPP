/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:46:33 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:57:55 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie{
	
	private:
		std::string	_name;
		
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif