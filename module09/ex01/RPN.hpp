/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:10:05 by dvallien         #+#    #+#             */
/*   Updated: 2023/05/01 15:10:06 by dvallien        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string.h>
#include <stack>
#include <sstream>
#include <stdlib.h> 

int     checkElementType(std::string polishExpr);
int     checkNbElements(std::string polishExpr);
float   doTheMath(std::stack<float> &stack, char ope);
int     checkData(std::string polishexp);

class DivisionByZeroException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Error: impossible division";
        }
};
class InvalidExpressionException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Error: invalid expression";
        }
};

#endif