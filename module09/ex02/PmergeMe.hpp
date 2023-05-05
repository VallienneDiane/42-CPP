/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:00:01 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/05 17:15:31 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
# define GREEN "\x1B[32m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
#include <iostream>
#include <string.h>
#include <cstdlib> 
#include <deque>
#include <climits>
#include <list>

int checkElement(std::string element);
std::deque<int> sort(std::deque<int> &deque);

#endif