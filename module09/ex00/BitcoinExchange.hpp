/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:21:51 by dvallien          #+#    #+#             */
/*   Updated: 2023/05/12 17:21:56 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
# define WHITE "\x1b[37m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <ctype.h>
#include <algorithm>

std::vector<std::string>    splitLine(std::string &line, char delim);
void                        saveData(std::vector <std::pair<std::string, float> > &data);
int                         checkInput(char *inputFile, std::vector <std::pair<std::string, float> > &data);
bool                        checkCharactersDate(std::string date);
int                         checkDate(std::string date);
int                         checkValue(std::string value);

#endif