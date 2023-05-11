/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:00:01 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/11 16:17:03 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
# define GREEN "\x1B[32m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define WHITE "\x1b[37m"
#include <iostream>
#include <string.h>
#include <cstdlib> 
#include <deque>
#include <climits>
#include <list>
#include <sys/time.h>

class PmergeMe 
{
private:
    std::deque<int> deque;
    std::list<int> list;

public:
    PmergeMe(void) {}
    PmergeMe(const PmergeMe &src) { *this = src; }
    PmergeMe & operator=(const PmergeMe &src) { (void)src; return (*this); }
    ~PmergeMe(void) {}

    // SETTERS
    void setDeque(int number) {
        deque.push_back(number);
    }
    void setList(int number) {
        list.push_back(number);
    }
    // GETTERS
    std::deque<int> getDeque(void) {
        return deque;
    }
    std::list<int> getList(void) {
        return list;
    }
    // MEMBERS FUNCTIONS
    int checkElement(std::string element);
    std::deque<int> sortDeque(std::deque<int> &deque);
    std::deque<int> mergeDeque(std::deque<int> &left, std::deque<int> &right);
    std::list<int> sortList(std::list<int> &list);
    
    template <typename Container>
    void printArray(Container arr) 
    {
        typename Container::iterator it = arr.begin();
        for(; it != arr.end(); it++) 
            std::cout << *it << " "; 
        std::cout << std::endl;
    }
    
    template <typename Iterator>
    void swap(Iterator &a, Iterator &b) {
        typename Iterator::value_type tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
    }

    template <typename Container>
    Container insertSort(Container &arr) 
    {
        typename Container::iterator it = arr.begin();
        typename Container::iterator tmp;
        
        it++;
        for(; it != arr.end(); it++) {
            tmp = it;
            tmp--;
            while(it != arr.begin() && *it < *tmp) {
                swap(it, tmp);
                it--;
                tmp--;
            }
        }
        return (arr);
    }
};

#endif