/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:51:36 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 10:54:11 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string>
# include <math.h>
# include <limits.h>
# include <stdlib.h>
// **************************** //
//      CHECK THE TYPE          //
// **************************** //
bool	isChar(std::string arg);
bool	isNum(std::string arg);
bool	isFloat(std::string arg);
bool	isLitteralFloat(std::string arg);
bool	isDouble(std::string arg);
bool	isLitteralDouble(std::string arg);
// **************************** //
//         CONVERT CHAR         //
// **************************** //
void	convertChar(std::string arg);
void	charToChar(char arg);
void	charToInt(char arg);
void	charToFloat(char arg);
void	charToDouble(char arg);
// **************************** //
//      CONVERT DOUBLE          //
// **************************** //
void	convertDouble(std::string arg);
void	doubleToChar(double nb);
void	doubleToInt(std::string arg, double nb);
void	doubleToFloat(double nb, size_t j);
void	doubleToDouble(double nb, size_t j);
// **************************** //
//      CONVERT FLOAT           //
// **************************** //
void	convertFloat(std::string arg);
void	floatToChar(float nb);
void	floatToInt(std::string arg, float nb);
void	floatToFloat(float nb, size_t j);
void	floatToDouble(float nb, size_t j);
void	toNan(void);
// **************************** //
//        CONVERT INT           //
// **************************** //
void	convertInt(std::string arg);
void	intToChar(int nb);
void	intToInt(int nb);
void	intToFloat(int nb);
void	intToDouble(int nb);

#endif