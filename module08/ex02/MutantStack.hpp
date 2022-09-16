/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:56:51 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/16 14:43:50 by dvallien         ###   ########.fr       */
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
};

#endif