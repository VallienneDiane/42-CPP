/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:47:07 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 15:55:07 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(void): _array[]
{
}

Array::Array(unsigned int n): _array[n]
{
} 

Array::Array(const Array &src)
{
	*this = src;
}

Array & Array::operator=(const Array &src)
{
	this->_array[] = src.getArray[];
	return (*this);
}

Array::~Array(void)
{
}

/* FUNCTIONS */
int	size(void) const;