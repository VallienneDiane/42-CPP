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

// int checkNumbers(int number) {
//     if(number < 0 || number > 10) {
//         std::cout << "Error: wrong number format" << std::endl;
//         return(1);
//     }
//     return (0);
// }

int checkElementType(std::string polishExpr) {

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(!isdigit(polishExpr[i]) && polishExpr[i] != '*' && polishExpr[i] != '+' && polishExpr[i] != '-' && polishExpr[i] != '/' && polishExpr[i] != ' ') {
            std::cout << "Error: wrong expression format" << std::endl;
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
        std::cout << "Error: invalid expression2" << std::endl;
        return (1);
    }
    return(0);
}

float doTheMath(std::stack<int> stack, char ope) {
    float result = 0;
    float newNb1 = stack.top();
    stack.pop();
    float newNb2 = stack.top();
    stack.pop();
    switch(ope) 
    {
        case '+': 
            result = newNb2 + newNb1;
            stack.push(result);
            break;
        case '-':
            result = newNb2 - newNb1;
            stack.push(result);
            break;
        case '*':
            result = newNb2 * newNb1;
            stack.push(result);
            break;
        case '/':
            if(newNb1 == 0) {
                std::cout << "Error: impossible division" << std::endl;
                break;
            }
            result = newNb2 / newNb1;
            stack.push(result);
            break;
        default : 
            break;
    }
    return (result);
}

int checkData(std::string polishExpr) 
{
    std::stringstream ss(polishExpr);
    std::stack<int> stack;

    if(polishExpr.size() == 0) {
        std::cout << "Error: empty expression" << std::endl;
        return (1);
    }
    if(checkElementType(polishExpr) == 1) 
        return (1);
    if(checkNbElements(polishExpr) == 1) 
        return (1);

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(polishExpr.length() < 3) {
            std::cout << "Error: invalid expression1" << std::endl;
            return (1);
        }
        while(polishExpr[i] == ' ') {
            i++;
        }
        if(isdigit(polishExpr[i])) {
            int number = polishExpr[i] - 48;
            stack.push(number);
        }
        else {
            char ope = polishExpr[i];
            if(stack.size() > 1) {
                float result = doTheMath(stack, ope);
                
            }
        }          
    }
    std::cout << result << std::endl;
    return (0);
}