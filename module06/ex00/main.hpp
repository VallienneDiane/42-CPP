/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:51:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 16:54:58 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string>
# include <math.h>
# include <limits.h>
# include "checkType.cpp"
# include "convertChar.cpp"
# include "convertInt.cpp"
# include "convertFloat.cpp"
# include "convertDouble.cpp"

// **************************** //
//      CHECK THE TYPE          //
// **************************** //
bool	isChar(std::string arg);
bool	isNum(std::string arg);
bool	isFloat(std::string arg);
bool	isLitteralFloat(std::string arg);
bool	isDouble(std::string arg);
bool	isLitteralDouble(std::string arg);

#endif