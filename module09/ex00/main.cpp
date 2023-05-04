/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:38 by dvallien         #+#    #+#             */
/*   Updated: 2023/05/01 14:31:38 by dvallien        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    
    std::vector <std::pair<std::string, float> > data;

    if(ac != 2) {
        std::cout << "Usage : ./btc input.txt " << std::endl;
        return (1);
    }
    try {
        saveData(data);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        if(checkInput(av[1], data) == 1)
            return (1);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return (0);
}