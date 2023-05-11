/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/11 15:36:04 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int av, char **ac)
{
    PmergeMe Pmerge;
    int number = 0;
    
    if(av < 2) {
        std::cout << "Usage : ./PmergeMe Numbers" << std::endl;
        return (1);
    }
    for(int i = 1; i < av; i++) {
        if(Pmerge.checkElement(ac[i]) == 1)
            return (1);
        number = atoi(ac[i]);
        Pmerge.setDeque(number);
        Pmerge.setList(number);
    }
    std::deque<int> deque;
    deque = Pmerge.getDeque();
    std::cout << ORANGE<< "Before: (deque) ";
    Pmerge.printArray(deque);
    
    deque = Pmerge.sortDeque(deque);
    std::cout << WHITE << "After: (deque) ";
    Pmerge.printArray(deque);

    
    std::list<int> list;
    list = Pmerge.getList();
    std::cout << ORANGE<< "Before: (list) ";
    Pmerge.printArray(list);
    list = Pmerge.sortList(list);
    std::cout << WHITE << "After: (list) ";
    Pmerge.printArray(list);


    return (0);
}