/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:36:23 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/07 15:52:58 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed{
	
	public:
		Fixed( void );
		Fixed( const Fixed &source );
		Fixed & operator=( const Fixed &source );
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
	private:
		int _number;
		int const static _bits = 8;
};

#endif