/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:48 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/09 16:21:05 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(42.42f);
	Fixed d(10);
	Fixed e( Fixed( 10.5f ) * Fixed( 5 ) );
	
	std::cout << "COMPARISON OPERATORS" << std::endl;
	std::cout << "value c : " << c << " ; " << "value d : " << d << std::endl;
	std::cout << "c > d ? : " << (c > d) << std::endl;
	std::cout << "c < d ? : " << (c < d) << std::endl;
	std::cout << "c >= d ? : " << (c >= d) << std::endl;
	std::cout << "c <= d ? : " << (c <= d) << std::endl;
	std::cout << "c == d ? : " << (c == d) << std::endl;
	std::cout << "c != d ? : " << (c != d) << std::endl;
	std::cout << std::endl;
	std::cout << "ARITHMETIC OPERATORS" << std::endl;
	std::cout << "c + d : " << c + d << std::endl;
	std::cout << "c - d : " << c - d << std::endl;
	std::cout << "c * d : " << c * d << std::endl;
	std::cout << "c / d : " << c / d << std::endl;
	std::cout << std::endl;
	std::cout << "PRE & POST INCREMENT OPERATORS" << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "a-- : " << a-- << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << std::endl;
	std::cout << "MIN OR MAX VALUE" << std::endl;
	std::cout << "value e : " << e << " ; " << "value b : " << b << std::endl;
	std::cout << "max between e & b : " << Fixed::max( e, b ) << std::endl;
	std::cout << "min between e & b : " << Fixed::min( e, b ) << std::endl;
	std::cout << "value a : " << a << " ; " << "value b : " << b << std::endl;
	std::cout << "const max between a & b : " << Fixed::max( a, b ) << std::endl;
	std::cout << "const min between a & b : " << Fixed::min( a, b ) << std::endl;
	
	return 0;
}