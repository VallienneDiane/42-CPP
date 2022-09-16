/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vallienne <vallienne@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:56:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 18:08:19 by vallienne        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(const MutantStack &src);
		MutantStack & operator=(const MutantStack &src);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type	container_type;
		typedef typename container_type::iterator		iterator;

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
{
}

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
{
}

#endif