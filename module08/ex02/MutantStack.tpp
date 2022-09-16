/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:20:33 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 14:45:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

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