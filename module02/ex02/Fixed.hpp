/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:47 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 11:41:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed{
	
	private:
		int	_number;
		int const static _bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &source);
		Fixed	&operator=(const Fixed &source);
		~Fixed(void);
		
		Fixed(const int nb);
		Fixed(const float nb);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed static &min(Fixed &lhs, Fixed &rhs);
		Fixed static const &min(const Fixed &lhs, const Fixed &rhs);
		Fixed static &max(Fixed &lhs, Fixed &rhs);
		Fixed static const &max(const Fixed &lhs, const Fixed &rhs);
		
		bool	operator<(const Fixed &rhs);
		bool	operator>(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		bool	operator>=(const Fixed &rhs);
		bool	operator==(const Fixed &rhs);
		bool	operator!=(const Fixed &rhs);
		
		Fixed	&operator++(void);
		Fixed	operator++(int n);
		Fixed	&operator--(void);
		Fixed	operator--(int n);	
		Fixed	operator+(const Fixed &source) const;
		Fixed	operator-(const Fixed &source) const;
		Fixed	operator*(const Fixed &source) const;
		Fixed	operator/(const Fixed &source) const;
};
std::ostream &operator<<(std::ostream &stream, const Fixed &source);

#endif