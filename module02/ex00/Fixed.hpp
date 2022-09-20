/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:36:23 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 09:49:18 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed{
	
	private:
		int _number;
		int const static _bits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &source);
		Fixed & operator=(const Fixed &source);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif