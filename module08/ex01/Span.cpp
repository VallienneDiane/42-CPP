/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:00:58 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/27 16:58:55 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/****************************/
/* CONSTRUCTOR & DESTRUCTOR */
/****************************/
Span::Span(void) : _size(0), _nbElements(0)
{}

Span::Span(int N) : _size(N), _nbElements(0)
{}

Span::Span(const Span &src)
{
	_arrayNb = src._arrayNb;
	_size = src._size;
	*this = src;
}

Span::~Span(void)
{}

/****************************/
/********* OPERATORS ********/
/****************************/
Span & Span::operator=(const Span &src)
{
	_arrayNb = src._arrayNb;
	_size = src._size;
	return (*this);
}

/****************************/
/******** FUNCTIONS *********/
/****************************/
void Span::addNumber(int nb)
{	
	if (_nbElements < _size)
	{
		_arrayNb.push_back(nb);
		_nbElements++;
	}
	else
		throw Span::TooManyElements();
}

int	randomNumber(void)
{
	return (std::rand()%100);
}

void	Span::addNumber(void)
{
	srand(time(NULL));
	_arrayNb.assign(_size, 0); //reset _size of array
	std::generate(_arrayNb.begin(), _arrayNb.end(), randomNumber); //iterate and generate random numbers
	// for (int i = 0; i < _size; i++) // print numbers
	// 	std::cout << _arrayNb[i] << std::endl;
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
	int diff;
	int	shortest;
	
	if (_arrayNb.size() < 2)
		throw Span::NotEnoughElements();
	shortest = INT_MAX;
	for(std::vector<int>::iterator i = _arrayNb.begin(); i != _arrayNb.end(); i++)	
	{
		for(std::vector<int>::iterator j = i + 1; j != _arrayNb.end(); j++)
		{
			diff = std::abs(*i - *j);
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
	
	if (_arrayNb.size() < 2)
		throw Span::NotEnoughElements();
	longest = 0;
	for(std::vector<int>::iterator i = _arrayNb.begin(); i != _arrayNb.end(); i++)	
	{
		for(std::vector<int>::iterator j = i + 1; j != _arrayNb.end(); j++)
		{
			diff = std::abs(*i - *j);
			if (diff > longest)
				longest = diff;
		}
	}
	return (longest);
}