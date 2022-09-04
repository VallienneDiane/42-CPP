/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:05:17 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 15:20:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string.h>

template< typename T >
void	iter(T const *tab, int size, void funct(T const &))
{
	for(int i = 0; i < size; i++)
		funct(tab[i]);
}

template< typename T >
void	iterNoConst(T *tab, int size, void funct(T &))
{
	for(int i = 0; i < size; i++)
		funct(tab[i]);
}

template< typename T >
void	printTab(T const &str)
{
	std::cout << str << " ";
}

#endif
