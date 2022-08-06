/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:19:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/06 16:46:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <string>

class Harl{
	
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
	
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

#endif