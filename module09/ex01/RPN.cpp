/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:22:25 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/12 17:22:27 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int checkElementType(std::string polishExpr) {

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(!isdigit(polishExpr[i]) && polishExpr[i] != '*' && polishExpr[i] != '+' && polishExpr[i] != '-' && polishExpr[i] != '/' && polishExpr[i] != ' ')
            throw InvalidExpressionException();
    }
    return(0);
}

int checkNbElements(std::string polishExpr) {

    int countNumbers = 0;
    int countOperators = 0;

    for(size_t i = 0; i < polishExpr.length(); i++) {
        if(isdigit(polishExpr[i]) != 0)
            countNumbers++;
        else if(polishExpr[i] == '*' || polishExpr[i] == '+' || polishExpr[i] == '-' || polishExpr[i] == '/')
            countOperators++;
    }
    countNumbers--;
    if(countNumbers != countOperators)
        throw InvalidExpressionException();
    return(0);
}

float doTheMath(std::stack<float> &stack, char ope) {
    float newNb1 = 0;
    float newNb2 = 0;
    float result;

    if(stack.size() > 1) {
        newNb1 = stack.top();
        stack.pop();
        newNb2 = stack.top();
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
                    throw DivisionByZeroException();
                }
                result = newNb2 / newNb1;
                stack.push(result);
                break;
            default : 
                break;
        }
    }
    else {
        throw InvalidExpressionException();
    }
    return (result);
}

int checkData(std::string polishExpr) 
{
    try {
        std::stringstream ss(polishExpr);
        std::stack<float> stack;
        size_t i = 0;
        char ope;

        if(polishExpr.size() == 0)
            throw InvalidExpressionException();
        checkElementType(polishExpr);
        checkNbElements(polishExpr);
        for(i = 0; i < polishExpr.length(); i++) {
            if(polishExpr.length() < 3)
                throw InvalidExpressionException(); 
            if(isdigit(polishExpr[i])) {
                int number = polishExpr[i] - 48;
                stack.push(number);
            }
            else if (polishExpr[i] == '*' || polishExpr[i] == '+' || polishExpr[i] == '-' || polishExpr[i] == '/')  {
                ope = polishExpr[i];
                if(stack.size() > 1) {
                    doTheMath(stack, ope);
                }
                else {
                    throw InvalidExpressionException();
                }
            }
        }
        std::cout << stack.top() << std::endl;
        return (0);
    }
    catch(DivisionByZeroException& e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
    catch(InvalidExpressionException& e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
}