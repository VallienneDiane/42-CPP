/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:49:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 13:59:59 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const &	min(T const &a, T const &b)
{
	return( a <= b ? a : b);
}

template< typename T >
T const &	max(T const &a, T const &b)
{
	return( a >= b ? a : b);
}

#endif
