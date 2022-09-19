/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:53:47 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 11:28:58 by dvallien         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &source);
		~Fixed(void);
		
		Fixed(const int nb);
		Fixed(const float nb);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};
std::ostream &operator<<(std::ostream &stream, const Fixed &source );

#endif