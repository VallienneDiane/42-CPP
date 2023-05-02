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

int checkElementType(std::string polishExpr) {

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(!isdigit(polishExpr[i]) && polishExpr[i] != '*' && polishExpr[i] != '+' && polishExpr[i] != '-' && polishExpr[i] != '/' && polishExpr[i] != ' ') {
            std::cout << "Error: wrong expression format : polishExpr[i] = " << polishExpr[i] << std::endl;
            return (1);
        }
    }
    return(0);
}

int checkNbElements(std::string polishExpr) {
    int countNumbers = 0;
    int countOperators = 0;

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(isdigit(polishExpr[i]) != 0) {
            countNumbers++;
        }
        else if(polishExpr[i] == '*' || polishExpr[i] == '+' || polishExpr[i] == '-' || polishExpr[i] == '/') {
            countOperators++;
        }
    }
    countNumbers--;
    if(countNumbers != countOperators) {
        std::cout << "Error: too much operators or numbers" << std::endl;
        return (1);
    }
    return(0);
}

int checkData(std::string polishExpr) 
{
    std::stringstream ss(polishExpr);
    std::stack<int> stack;
    int result = 0;

    if(polishExpr.size() == 0) {
        std::cout << "Error: empty expression" << std::endl;
        return (1);
    }
    if(checkElementType(polishExpr) == 1) 
        return (1);
    if(checkNbElements(polishExpr) == 1) 
        return (1);

    for(size_t i = 0; i < polishExpr.length(); i++) {
        //remove spaces !!!
        if(isdigit(polishExpr[i])) {
            int number = polishExpr[i] - 48;
            if(checkNumbers(number) == 0) {
                stack.push(number);
            }
        }
        else {
            char ope = polishExpr[i];
            if(stack.size() >= 2) {
                int newNb1 = stack.top();
                std::cout << ope << " nb1 " << newNb1 << std::endl;
                stack.pop();
                int newNb2 = stack.top();
                std::cout << ope << " nb2 " << newNb2 << std::endl;
                stack.pop();
                switch(ope) 
                {
                    case '+': 
                        result = newNb2 + newNb1;
                        std::cout << " result = " << result << std::endl;
                        stack.push(result);
                        break;
                    case '-':
                        result = newNb2 - newNb1;
                        std::cout << " result = " << result << std::endl;
                        stack.push(result);
                        break;
                    default : 
                        break;
                }
            }
            else {
                std::cout << "Error: invalid input" << std::endl;
                return (1);
            }
        }          
    }
    return (0);
}