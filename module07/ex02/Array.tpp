/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:47:07 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/13 17:46:45 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


/* CONSTRUCTORS && DESTRUCTOR */
template <typename T>
Array<T>::Array(void): _size(0), _array(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n), _array(new T[n])
{
} 

template <typename T>
Array<T>::Array(const Array &src) : _size(src._size), _array(new T[src._size])
{
	for(unsigned int i = 0; i < src._size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] this->_array;
	return;
}

/* OPERATORS */
template <typename T>
Array<T> & Array<T>::operator=(const Array &src)
{
	_size = src._size;
	if (this != &src)
	{
		delete _array;
		_array = new T[src._size];
		for(unsigned int i = 0; i < src._size; i++)
			_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw SizeTooHighException();
	return (_array[i]);
}

template <typename T>
const T & Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw SizeTooHighException();
	return (_array[i]);
}

/* FUNCTIONS */
template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
const char* Array<T>::SizeTooHighException::what(void) const throw()
{
	return ("EXCEPTION : wrong index");
}