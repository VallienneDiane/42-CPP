/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/08 15:07:39 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int av, char **ac)
{
    std::deque<int> deque;
    std::list<int> list;
    int number = 0;
    
    if(av < 2) {
        std::cout << "Usage : ./PmergeMe Numbers" << std::endl;
        return (1);
    }
    for(int i = 1; i < av; i++) {
        if(checkElement(ac[i]) == 1)
            return (1);
        number = atoi(ac[i]);
        deque.push_back(number);
        list.push_back(number);
    }
    std::cout << "Before: ";
    printArray(deque);
    deque = sort(deque);
    std::cout << "After: ";
    printArray(deque);

    return (0);
}