/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:01:04 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 13:34:33 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string.h>
# include <algorithm>
# include <vector>
# include <limits.h>

class Span
{
	private:
		std::vector<int>	_arrayNb;
		unsigned int		_size;
		unsigned int		_i;
		
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &src);
		~Span(void);

		Span & operator=(const Span &src);
		void addNumber(int nb);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int	shortestSpan(void);
		int	longestSpan(void);

		class TooManyElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotEnoughElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream & operator<<(std::ostream &stream, const Span &src);

#endif