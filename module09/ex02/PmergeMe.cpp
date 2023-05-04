/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:59:16 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/04 16:50:31 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int saveData(std::string &sequence) {
    std::deque<int> deque;
    std::list<int> list;
    
    int number = atol(sequence.c_str());
    std::cout << "nb \"" << number << "\""<< std::endl;
    if(number > INT_MAX || number < INT_MIN) {
        std::cout << "Error: invalid number" << std::endl;
        return(1);
    }
    deque.push_back(number);
    list.push_back(number);
    return (0);
}

int checkSequence(std::string sequence) {
    for(size_t i = 0; i < sequence.size(); i++)
    {
        if(!isdigit(sequence[i])) {
            std::cout << "Error: invalid sequence" << std::endl;
            return (1);
        }
    }
    
    if(saveData(sequence) == 1)
        return (1);
    return (0);
}