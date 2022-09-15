/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 17:12:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/****************************/
/* CONSTRUCTOR & DESTRUCTOR */
/****************************/
Span::Span(void) : _arrayNb(std::vector<int>()), _size(0)
{
}

Span::Span(unsigned int N) : _arrayNb(std::vector<int>()), _size(N)
{
}


Span::Span(const Span &src)
{
	_arrayNb = src._arrayNb;
	_size = src._size;
	*this = src;
}

Span::~Span(void)
{
}

/****************************/
/********* OPERATORS ********/
/****************************/
Span & Span::operator=(const Span &src)
{
	(void)src;
	return (*this);
}

std::ostream & operator<<(std::ostream &stream, const Span &src)
{
	(void)src;
	return (stream);
}

/****************************/
/******** FUNCTIONS *********/
/****************************/
void Span::addNumber(int nb)
{
	unsigned int i = 0;
	if(i < _size)
	{
		_arrayNb.push_back(nb);
		i++;
	}
	else
		throw TooManyElements();
	// for (std::vector<int>::iterator it=_arrayNb.begin(); it!=_arrayNb.end(); ++it)
	// 	std::cout << ' ' << *it << std::endl;
}

const char* Span::TooManyElements::what(void) const throw()
{
	return("Exception : too many elements to add");
}

int	Span::shortestSpan(void)
{
	int diff;
	int	shortest;
	unsigned int j;
	
	shortest = INT_MAX;
	std::sort(_arrayNb.begin(), _arrayNb.end());
	for(unsigned int i = _size - 1; i > 0; i--)
	{
		for(j = i; j > 0; j--)
		{
			diff = _arrayNb[i] - _arrayNb[j - 1];
			if (diff < 0)
				diff = diff * -1;
			if (diff < shortest)
				shortest = diff;
		}
	}
	return (shortest);
}

int	Span::longestSpan(void)
{
	int diff;
	int	longest;
	unsigned int j;
	
	longest = 0;
	std::sort(_arrayNb.begin(), _arrayNb.end());
	for(unsigned int i = _size - 1; i > 0; i--)
	{
		for(j = i; j > 0; j--)
		{
			diff = _arrayNb[i] - _arrayNb[j - 1];
			if (diff < 0)
				diff = diff * -1;
			if (diff > longest)
				longest = diff;
		}
	}
	return (longest);
}