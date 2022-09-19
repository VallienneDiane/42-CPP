/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:13 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 11:40:45 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**********************************************/
/*			     CONSTRUCTORS                 */
/* ********************************************/
Fixed::Fixed(void) : _number(0)
{
	return;
}

Fixed::Fixed(const int nb)
{
	this->setRawBits(roundf(nb * (1 << this->_bits))) ;
}

Fixed::Fixed(const float nb)
{
	this->setRawBits(roundf(nb * (1 << this->_bits))) ;
}

Fixed::Fixed(const Fixed &source): _number(source._number)
{
	*this = source;
}

/**********************************************/
/*			        FUNCTIONS                 */
/* ********************************************/
int	Fixed::getRawBits(void) const
{
	return (this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

float	Fixed::toFloat(void ) const
{
	float floatNb;

	floatNb = (float)this->_number / (1 << this->_bits);
	return (floatNb );
}

int		Fixed::toInt(void ) const
{
	int	roundNb;
	
	roundNb = std::roundf(this->_number / (1 << this->_bits));
	return (roundNb);
}

Fixed &	Fixed::min(Fixed &lhs, Fixed &rhs )
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed const &	Fixed::min(const Fixed &lhs, const Fixed &rhs )
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed &	Fixed::max(Fixed &lhs, Fixed &rhs )
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed const &	Fixed::max(const Fixed &lhs, const Fixed &rhs )
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

/**********************************************/
/*			  ASSIGNMENT OPERATORS            */
/* ********************************************/
Fixed &	Fixed::operator=(const Fixed &source )
{
	this->_number = source.getRawBits();
	return (*this);
}

/**********************************************/
/*			  BITWISE OPERATORS               */
/* ********************************************/
std::ostream &operator<<(std::ostream &stream, const Fixed &source )
{
	stream << source.toFloat();
	return (stream);
}

/**********************************************/
/*			  COMPARISON OPERATORS            */
/* ********************************************/
bool	Fixed::operator<(const Fixed &rhs)
{
	if (this->_number < rhs.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator>(const Fixed &rhs)
{
	if (this->_number > rhs.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	if (this->_number <= rhs.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	if (this->_number >= rhs.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator==( const Fixed &rhs)
{
	if (this->_number == rhs.getRawBits())
		return (true);
	else 
		return (false);
}

bool	Fixed::operator!=( const Fixed &rhs)
{
	if (this->_number != rhs.getRawBits())
		return (1);
	else
		return (0);
}

/**********************************************/
/*			  ARITHMETIC OPERATORS            */
/* ********************************************/
Fixed Fixed::operator+( const Fixed &source) const
{
	return Fixed(toFloat() + source.toFloat());
}

Fixed Fixed::operator-( const Fixed &source) const
{
	return Fixed(toFloat() - source.toFloat());
}

Fixed Fixed::operator*( const Fixed &source) const
{
	return Fixed(toFloat() * source.toFloat());
}

Fixed Fixed::operator/( const Fixed &source) const
{
	return Fixed(toFloat() / source.toFloat());
}

/**********************************************/
/*		PRE-INCREMENT & POST-INCREMENT        */
/*			       OPERATORS                  */
/* ********************************************/
/* ++a increment and return new a             */
/* a++ increment and return old a             */
Fixed & Fixed::operator++( void)
{
	this->_number++;
	return (*this);
}

Fixed Fixed::operator++( int n)
{
	Fixed temp = (*this);
	(void)n;
	
	++(*this);
	return (temp);
}

Fixed & Fixed::operator--( void)
{
	this->_number--;
	return (*this);
}

Fixed Fixed::operator--( int n)
{
	Fixed temp = (*this);
	(void)n;
	
	--(*this);
	return (temp);
}

/**********************************************/
/*			        DESTRUCTOR                */
/* ********************************************/
Fixed::~Fixed( void)
{
	return;
}
