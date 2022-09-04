/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:21:27 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 15:53:41 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string.h>

template <typename T>
class Array
{
	private:
		T*	_array;

	public:
		Array(void); // creer array vide
		Array(unsigned int n); // creer array de n elements
		Array(const Array &src); // copie
		Array & operator=(const Array &src); // surcharge operator
		~Array(void); // destructor	

		int	size(void) const;
};


#endif