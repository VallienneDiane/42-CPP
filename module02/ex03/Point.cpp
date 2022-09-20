/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:30:10 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 10:45:33 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/******************************************/
/*             CONSTRUCTORS               */
/******************************************/
Point::Point(void) : _x(0), _y(0) {};

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	return;
}

Point::Point(const Point &source)
{
	*this = source;
}

Point & Point::operator=(const Point &source)
{
	(void)source;
	return (*this);
}

Point::~Point(void) {};

/******************************************/
/*               FUNCTIONS                */
/******************************************/
float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}
