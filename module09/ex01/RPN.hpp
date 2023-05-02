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
# define GREEN "\x1B[32m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
#include <iostream>
#include <string.h>
#include <stack>
#include <sstream>
#include <stdlib.h> 

int checkData(std::string polishexp);

#endif