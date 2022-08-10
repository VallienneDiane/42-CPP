/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:48 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/10 14:12:07 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point a(1,2);
	Point b(-3,7);
	Point c(7,4);
	Point point(-1,5);

	if (bsp(a, b, c, point) == 1)
		std::cout << "The point is inside" << std::endl;
	else
		std::cout << "The point is not inside" << std::endl;
		
	Point d(1,2);
	Point e(3,7);
	Point f(7,4);
	Point pnt(-1,5);

	if (bsp(d, e, f, pnt) == 1)
		std::cout << "The point is inside" << std::endl;
	else
		std::cout << "The point is not inside" << std::endl;
	return 0;
}