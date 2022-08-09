/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:30:10 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/09 17:00:31 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/******************************************/
/*             CONSTRUCTORS               */
/******************************************/

Point::Point( void ) : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

// Point::Point( const float x, const float y )
// {
// 	this->_x = x;
// 	this->_y = y;
// }

Point::Point( const Point &source ) // : _number(source._number)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Point &	Point::operator=( const Point &source )
{
	std::cout << "Copy assignment operator called" << std::endl;
	// this->_number = source.getRawBits();
	return (*this);
}

Point::~Point( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/******************************************/
/*              FUNCTIONS                 */
/******************************************/

// void	Fixed::setValue()
// {

// }