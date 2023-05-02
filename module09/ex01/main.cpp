/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:17:00 by dvallien         #+#    #+#             */
/*   Updated: 2023/04/08 20:25:36 by dvallien        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

    if(ac != 2) {
        std::cout << "Usage : ./RPN \"Reverse Polish Expression\"" << std::endl;
        return (1);
    }
    else {
        if(checkData(av[1]) == 1)
            return (1);
    }
    return (0);
}