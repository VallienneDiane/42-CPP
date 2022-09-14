/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:01:04 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 16:58:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string.h>
# include <algorithm>
# include <vector>

class Span
{
	private:
		std::vector<int>	_arrayNb;
		unsigned int		_size;
		
	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);

		void addNumber(int nb);
		int	shortestSpan(void);
		int	longestSpan(void);

		class TooManyElements : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif