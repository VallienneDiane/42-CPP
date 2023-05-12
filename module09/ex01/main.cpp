/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:22:12 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/12 17:22:16 by dvallien         ###   ########.fr       */
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