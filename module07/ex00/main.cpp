/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:21:52 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:31:56 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

/**************************TEMPLATES*********************************/
/* blueprint or formula for creating a generic class or a function 	*/
/* have to declare "template<typename T> " 							*/
/* replace int ,float, class etc : ref & is better for memory 		*/
/* no modification of parameters : const							*/
/* explicit instanciation  : max<int>(a, b)							*/
/* implicit instanciation : max(a,b) 								*/
/********************************************************************/

#include "whatever.hpp"

int main( void ) 
{
	std::cout << "-- Correction test --" << std::endl;
    Awesome e(2), f(4);
    swap(e, f);
    std::cout << "e " << e << " " << "f " << f << std::endl;
    std::cout << "max " << max(e, f) << std::endl;
    std::cout << "min " << min(e, f) << std::endl;
	std::cout << std::endl;
	std::cout << "-- My test --" << std::endl;
	int a = 2;
	int b = 3;
	
	std::cout << "Before swap " << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After swap " << "a = " << a << ", b = " << b << std::endl;
	std::cout << std::endl;
	std::cout << "Min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "Max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << std::endl;
	std::cout << "Before swap " << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap " << "c = " << c << ", d = " << d << std::endl;
	std::cout << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}