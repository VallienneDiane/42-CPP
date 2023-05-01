/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:10:01 by dvallien         #+#    #+#             */
/*   Updated: 2023/05/01 15:10:02 by dvallien        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int checkNumbers(int number) {
    if(number < 0 || number > 10) {
        std::cout << "Error: wrong number format" << std::endl;
        return(1);
    }
    return (0);
}

int checkData(std::string polishExpr) 
{
    std::stringstream ss(polishExpr);
    std::string element;
    std::stack<int> calcul;

    if(polishExpr.size() == 0) {
        std::cout << "Error: empty expression" << std::endl;
        return (1);
    }
    
    while(std::getline(ss, element, ' '))
    {
        for(size_t i = 0; i < element.length(); i++) {
            if(!isdigit(element[i]) && element[i] != '*' && element[i] != '+'&& element[i] != '-' && element[i] != '/') {
                std::cout << "Error: wrong expression format" << std::endl;
                return (1);
            }
            if(isdigit(element[i])) {
                int number = atoi(element.c_str());
                if(checkNumbers(number) == 0) {
                    calcul.push(number);
                }
            }
            else {
                std::cout << "element = " << element << std::endl;
                char ope = element[i];
                // check if ope is + - * /
                int newNumber = calcul.top();
            }          
        }
    }
    return (0);
}