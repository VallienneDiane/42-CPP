/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:47 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/08 16:51:32 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	public:
		Fixed( void );
		Fixed( const int nb);
		Fixed( const float nb);
		Fixed( const Fixed &source);
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		Fixed &operator=( const Fixed &source );
		Fixed &operator*( const Fixed &source );

	private:
		int	_number;
		int const static _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &source );

#endif