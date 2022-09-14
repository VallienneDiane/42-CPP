/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 17:00:25 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Constructor & Destructor */
Span::Span(void) : _arrayNb(0), _size(0)
{
}

Span::Span(unsigned int N) : _arrayNb(N), _size(N)
{
}

Span::~Span(void)
{
}

/* Functions */
void Span::addNumber(int nb)
{
	static unsigned int count = 0;
	
	if (count < _size)
	{
		_arrayNb.push_back(nb);
		count++;
	}
	else
		throw TooManyElements();
}

const char* Span::TooManyElements::what(void) const throw()
{
	return("Exception : too many elements to add");
}

// int	Span::shortestSpan(void) // plus petite distance entre les deux plus petits nbr
// {
	
// }

// int	Span::longestSpan(void)
// {
	
// }