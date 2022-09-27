/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:56:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/27 14:32:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>
# include <list>

/**************************************************************************************************************************/
/* std::stack																		  									  */
/* template <class T, class Container = deque<T> > class stack;															  */
/* Stacks are a type of container adaptor, where elements are inserted and extracted only from one end of the container.  */
/* Stacks are implemented as container adaptors, which are classes that use an encapsulated object of a specific container*/
/* Class as its underlying container, providing a specific set of member functions to access its elements. 				  */
/* Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.          */
/**************************************************************************************************************************/
// Container : Type of the internal underlying container object where the elements are stored. 
// Aliased as member type stack::container_type.

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