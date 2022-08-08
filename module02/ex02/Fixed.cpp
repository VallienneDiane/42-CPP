/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:55:13 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/08 16:55:57 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(roundf(nb * (1 << this->_bits))) ;
}

Fixed::Fixed( const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nb * (1 << this->_bits))) ;
}

Fixed::Fixed( const Fixed &source ): _number(source._number)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed	&Fixed::operator=( const Fixed &source )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_number = source.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &source )
{
	stream << source.toFloat();
	return (stream);
}

int	Fixed::getRawBits(void) const
{
	return (this->_number);
}

void Fixed::setRawBits( int const raw )
{
	this->_number = raw;
}

float	Fixed::toFloat( void ) const
{
	float floatNb;

	floatNb = (float)this->_number / (1 << this->_bits);
	return ( floatNb );
}

int		Fixed::toInt( void ) const
{
	int	roundNb;
	
	roundNb = std::roundf(this->_number / (1 << this->_bits));
	return (roundNb);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &Fixed::operator*( const Fixed &source )
{

}