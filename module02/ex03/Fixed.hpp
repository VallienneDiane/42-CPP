/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:47 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/10 11:00:51 by dvallien         ###   ########.fr       */
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
		Fixed	&operator=( const Fixed &source );
		
		Fixed static &min( Fixed &lhs, Fixed &rhs );
		Fixed static const &min( const Fixed &lhs, const Fixed &rhs );
		Fixed static &max( Fixed &lhs, Fixed &rhs );
		Fixed static const &max( const Fixed &lhs, const Fixed &rhs );
		
		bool	operator<( const Fixed &rhs );
		bool	operator>( const Fixed &rhs );
		bool	operator<=( const Fixed &rhs );
		bool	operator>=( const Fixed &rhs );
		bool	operator==( const Fixed &rhs );
		bool	operator!=( const Fixed &rhs );
		
		Fixed	&operator++( void );
		Fixed	operator++( int n );
		Fixed	&operator--( void );
		Fixed	operator--( int n );	
		Fixed	operator+( const Fixed &source ) const;
		Fixed	operator-( const Fixed &source ) const;
		Fixed	operator*( const Fixed &source ) const;
		Fixed	operator/( const Fixed &source ) const;

	private:
		int	_number;
		int const static _bits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &source );

#endif