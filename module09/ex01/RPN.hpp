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

int checkData(std::string polishexp);
int doTheMath(std::string expr);

#endif