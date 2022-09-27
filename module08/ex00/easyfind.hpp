/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:43:54 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/27 12:04:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <vector> 
#include <string.h>

class ValueNotFound : public std::exception
{
	public:
		virtual const char* what() const throw();
};

template <typename T>
void	easyfind(T container, int nb)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw ValueNotFound();
	else
		std::cout << "Value " << nb << " has been found in the container" << std::endl;
}

const char* ValueNotFound::what(void) const throw()
{
	return("Exception : value hasn't been found in the container");
}

#endif