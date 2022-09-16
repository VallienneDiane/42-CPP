/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 13:53:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/****************************/
/* CONSTRUCTOR & DESTRUCTOR */
/****************************/
Span::Span(void) : _arrayNb(std::vector<int>()), _size(0), _i(0)
{
}

Span::Span(unsigned int N) : _arrayNb(std::vector<int>()), _size(N), _i(0)
{
}

Span::Span(const Span &src)
{
	_arrayNb = src._arrayNb;
	_size = src._size;
	_i = src._i;
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
	_arrayNb = std::vector<int>(src._arrayNb);
	return (*this);
}

/****************************/
/******** FUNCTIONS *********/
/****************************/
void Span::addNumber(int nb)
{	
	if (_i < _size)
	{
		_arrayNb.push_back(nb);
		_i++;
	}
	else
		throw TooManyElements();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{	
		_arrayNb.push_back(*it);
		_i++;
	}
	if (_i > _size)
		throw TooManyElements();
}

const char* Span::TooManyElements::what(void) const throw()
{
	return("Exception : too many elements added");
}

const char* Span::NotEnoughElements::what(void) const throw()
{
	return("Exception : not enough elements to find the distance");
}

int	Span::shortestSpan(void)
{
	int diff = 0;
	int	shortest;
	unsigned int j;
	
	if (_size < 2)
		throw NotEnoughElements();
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
	
	if (_size < 2)
		throw NotEnoughElements();
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