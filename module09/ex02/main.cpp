/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/11 18:52:59 by dvallien         ###   ########.fr       */
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
    {
        struct timeval timeBeforeSort, timeAfterSort;
        std::deque<int> deque = Pmerge.getDeque();
        std::cout << BLUE << "Before: (deque) ";
        Pmerge.printArray(deque);
        gettimeofday(&timeBeforeSort, NULL);
        deque = Pmerge.sortDeque(deque);
        gettimeofday(&timeAfterSort, NULL);
        std::cout << GREEN<< "After: (deque) ";
        Pmerge.printArray(deque);
        long microseconds = timeAfterSort.tv_usec - timeBeforeSort.tv_usec;
        std::cout << WHITE  << "Time to process a range of " << deque.size() << " elements with std::deque : " << microseconds << " us" << std::endl;
        std::cout << std::endl;
    }
    {
        struct timeval timeBeforeSort, timeAfterSort;
        std::list<int> list = Pmerge.getList();
        std::cout << ORANGE<< "Before: (list) ";
        Pmerge.printArray(list);
        gettimeofday(&timeBeforeSort, NULL);
        list = Pmerge.sortList(list);
        gettimeofday(&timeAfterSort, NULL);
        std::cout << GREEN << "After: (list) ";
        Pmerge.printArray(list);
        long microseconds = timeAfterSort.tv_usec - timeBeforeSort.tv_usec;
        std::cout << WHITE << "Time to process a range of " << list.size() << " elements with std::list : " << microseconds << " us" << std::endl;
    }
    return (0);
}