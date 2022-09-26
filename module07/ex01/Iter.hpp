/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:05:17 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:33:39 by dvallien         ###   ########.fr       */
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
void	iter(T *tab, int size, void funct(T &))
{
	for(int i = 0; i < size; i++)
		funct(tab[i]);
}

template< typename T >
void	printTab(T const &str)
{
	std::cout << str << " ";
}

class Awesome
{
	public:
		Awesome( void ): _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<< (std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o; }

template<typename T>
void print (T const & x) { std::cout << x << std::endl; return; }
#endif
