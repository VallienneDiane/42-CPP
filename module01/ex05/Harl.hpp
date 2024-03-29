/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 14:59:40 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <string>

class Harl{
	
	private:
		void			_debug( void );
		void			_info( void );
		void			_warning( void );
		void			_error( void );
		void			(Harl::*_ptrF[4])( void );
		std::string		_lvl[4];
	
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif