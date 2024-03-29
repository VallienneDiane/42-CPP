/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:56:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/27 16:27:44 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>
# include <list>

/**********************************************************************************/
/* std::stack																	  */
/* is a container adaptor that gives the programmer the functionnality of a stack */
/* it is LIFO (last-in, first-out data structure)								  */
/* allows to push(insert) or pop(remove) only from back							  */
/* internally it uses std::deque STL container									  */						
/**********************************************************************************/

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &src);
		MutantStack & operator=(const MutantStack &src);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator		begin(void)
		{
			return (this->c.begin());
		}
		iterator		end(void)
		{
			return (this->c.end());
		}
};

template <typename T>
MutantStack<T>::MutantStack(void)
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src)
{
	*this = src;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &src)
{
	(void)src;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{}

#endif