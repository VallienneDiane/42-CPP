/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:21:27 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:41:09 by dvallien         ###   ########.fr       */
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
		unsigned int	_size;
		T*				_array;

	public:
		Array(void);
		Array(unsigned int n);
		Array & operator=(const Array &src);
		~Array(void);
		
		Array(const Array &src);
		T & operator[](unsigned int i);
		const T & operator[](unsigned int i) const;

		unsigned int size(void) const;
		class SizeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


#endif