/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:59:16 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/08 18:06:59 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printArray(std::deque<int> deque) {
    std::deque<int>::iterator it = deque.begin();
    std::deque<int>::iterator end = deque.end();
    
    for(; it != end; it++) {
        std::cout << *it << " "; 
    }
    std::cout << std::endl;
}

std::deque<int> mergeDeque(std::deque<int> &left, std::deque<int> &right) {
    
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

void swap(int &a, int &b) {
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

std::deque<int> insertSort(std::deque<int> &deque) {
    
    for(size_t i = 1; i < deque.size(); i++) {
        while(i > 0 && deque[i] < deque[i-1]) {
            swap(deque[i], deque[i-1]);
            i--;
        }
    }
    return (deque);
}

std::deque<int> sort(std::deque<int> &deque) {

    if(deque.size() > 6) {
        std::deque<int>::iterator half = deque.begin();
        for(size_t i = 0; i < (deque.size()/2); i++) {
            half++;
        }
        std::deque<int> dequeLeft(deque.begin(), half);
        std::deque<int> dequeRight(half, deque.end());
        dequeLeft = sort(dequeLeft);
        dequeRight = sort(dequeRight);
        return mergeDeque(dequeLeft, dequeRight);
    }
    return insertSort(deque);
}

int checkElement(std::string element) {
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