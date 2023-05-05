/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:59:16 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/05 17:15:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::deque<int> mergeDeque(std::deque<int> &dequeLeft, std::deque<int> &dequeRight) {
    std::deque<int> deque;

    std::deque<int>::iterator it = deque.begin();
    std::deque<int>::iterator end = deque.end();
    
    for(size_t i = 0; i < dequeLeft.size(); i++) {
        deque.push_back(dequeLeft[i]);
    }
    for(size_t i = deque.size() + 1; i < dequeRight.size(); i++) {
        deque.push_back(dequeRight[i]);
    }
    
    for(; it != end ; it++) {
        std::cout << "merge deque value : " << *it << std::endl;
    }
    return (deque);
}

std::deque<int> sort(std::deque<int> &deque) {
    std::deque<int> dequeLeft;
    std::deque<int> dequeRight;
    
    std::deque<int>::iterator it = dequeLeft.begin();
    std::deque<int>::iterator end = dequeLeft.end();
    std::deque<int>::iterator itR = dequeRight.begin();
    std::deque<int>::iterator endR = dequeRight.end();
    
    std::cout << "ici" << std::endl;
    while(deque.size() > 6) {
        for(size_t i = 0; i < (deque.size() / 2); i++) {
            dequeLeft.push_back(deque[i]);
        }
        sort(dequeLeft);
        for(size_t i = (deque.size() / 2) + 1; i < deque.size(); i++) {
            dequeRight.push_back(deque[i]);
        }
        sort(dequeRight);
        return mergeDeque(dequeLeft, dequeRight);
    }

    for(; it != end ; it++) {
        std::cout << "sort deque value : " << *it << std::endl;
    }
    for(; itR != endR ; itR++) {
        std::cout << "sort deque value : " << *itR << std::endl;
    }

    return (deque);
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