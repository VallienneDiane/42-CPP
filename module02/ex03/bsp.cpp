/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:30:17 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/10 14:11:50 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float calculate( Point const a, Point const b, Point const point)
{
	float result;

	result = ((a.getX()-point.getX()) * (b.getY()-point.getY()) - (a.getY()-point.getY()) * (b.getX() - point.getX()));
	return (result);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float AB = calculate(a, b, point);
	float BC = calculate(b, c, point);
	float CA = calculate(c, a, point);
	
	std::cout << "Dist AB :" << AB << std::endl;
	std::cout << "Dist BC :" << BC << std::endl;
	std::cout << "Dist CA :" << CA << std::endl;
	if ((AB > 0 && BC > 0 && CA > 0) | (AB < 0 && BC < 0 && CA < 0))
		return (1);
	else
		return (0); 
}