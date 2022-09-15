/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:01:04 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/15 16:33:56 by dvallien         ###   ########.fr       */
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
		
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &src);
		~Span(void);

		Span & operator=(const Span &src);
		void addNumber(int nb);
		int	shortestSpan(void);
		int	longestSpan(void);

		class TooManyElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream & operator<<(std::ostream &stream, const Span &src);

#endif