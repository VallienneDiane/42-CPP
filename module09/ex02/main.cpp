/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:31:27 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/04 16:16:53 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int av, char **ac)
{
    if(av < 2) {
        std::cout << "Usage : ./PmergeMe Numbers" << std::endl;
        return (1);
    }
    else {
        for(int i = 1; i < av; i++) {
            if(checkSequence(ac[i]) == 1)
                return (1);
        }
    }
    return (0);
}