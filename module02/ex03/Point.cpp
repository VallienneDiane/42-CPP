/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:30:10 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/10 14:10:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/******************************************/
/*             CONSTRUCTORS               */
/******************************************/

Point::Point( void ) : _x(0), _y(0)
{
	return;
}

Point::Point( const float x, const float y ) : _x(x), _y(y)
{
	return;
}

Point::Point( const Point &source ) : _x(source._x), _y(source._y)
{
	*this = source;
}

Point &Point::operator=( const Point &source )
{
	(void)source;
	return (*this);
}

Point::~Point( void )
{
	return;
}

/******************************************/
/*               FUNCTIONS                */
/******************************************/

float	Point::getX( void ) const
{
	return (this->_x.toFloat());
}

float	Point::getY( void ) const
{
	return (this->_y.toFloat());
}