/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:59:16 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/11 15:03:54 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::deque<int> PmergeMe::mergeDeque(std::deque<int> &left, std::deque<int> &right) {
    
    std::deque<int> newDeque;
    
    while(left.size() || right.size()) {
        if(right.size() == 0 || ((left.size() && right.size()) && (*left.begin() <= *right.begin()))) {
            newDeque.push_back(*(left.begin()));
            left.pop_front();
        }
        else {
            newDeque.push_back(*(right.begin()));
            right.pop_front();
        }
    }
    return (newDeque);
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> &deque) {

    if(deque.size() > 6) {
        std::deque<int>::iterator half = deque.begin();
        for(size_t i = 0; i < (deque.size()/2); i++) {
            half++;
        }
        std::deque<int> dequeLeft(deque.begin(), half);
        std::deque<int> dequeRight(half, deque.end());
        dequeLeft = sortDeque(dequeLeft);
        dequeRight = sortDeque(dequeRight);
        return mergeDeque(dequeLeft, dequeRight);
    }
    return insertSort(deque);
}

std::list<int> PmergeMe::sortList(std::list<int> &list) {

    if(list.size() > 6) {
        std::list<int>::iterator half = list.begin();
        for(size_t i = 0; i < (list.size()/2); i++) {
            half++;
        }
        std::list<int> listLeft(list.begin(), half);
        std::list<int> listRight(half, list.end());
        listLeft = sortList(listLeft);
        listRight = sortList(listRight);
        listLeft.merge(listRight);
        return listLeft;
    }
    return insertSort(list);
}

int PmergeMe::checkElement(std::string element) {
    long number = 0;
    
    if(element.empty()) {
        std::cout << "Error: empty input" << std::endl;
        return (1);
    }
    for(size_t i = 0; i < element.size(); i++)
    {
        if(!isdigit(element[i])) {
            std::cout << "Error: invalid element" << std::endl;
            return (1);
        }
    }
    number = atol(element.c_str());
    if(number > INT_MAX || number < INT_MIN) {
        std::cout << "Error: invalid number" << std::endl;
        return(1);
    }
    return (0);
}