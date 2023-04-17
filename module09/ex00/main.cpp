/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vallienne <vallienne@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:38 by vallienne         #+#    #+#             */
/*   Updated: 2023/04/18 00:22:10 by vallienne        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <ctype.h>
#include <algorithm> 
// pair {
//     first: 2001-10-05;
//     second: 3;
// }
void saveData(std::vector <std::pair<std::string, float> > &data) 
{
    std::ifstream myfile("data.csv");
    std::string line;
    std::string date;
    std::string value;
    
    if (myfile.is_open())
    {
        while (std::getline (myfile,line))
        {
            date = line.substr(0, line.find(","));
            value = line.substr(line.find(",")+1, line.length());
            data.push_back(std::make_pair(date, atof(value.c_str())));            
        }
        myfile.close();
    }
    else {
        throw std::runtime_error("Error: could not open file");
    }
}

std::vector<std::string> splitLine(std::string &line, char delim) 
{
    std::stringstream ss(line);
    std::string element;
    std::vector<std::string> splitResult;
    
    while(std::getline(ss, element, delim))
    {
        splitResult.push_back(element);
    }
    return splitResult;
}

bool checkCaractersDate(std::string date)
{
    for(size_t i = 0; i < date.size(); i++) {
        if(date[i] != '-' && !isdigit(date[i]))
            return (false);
    }
    return (true);
}

int checkDate(std::string date) 
{
    std::vector<std::string> splitDate;
    
    if(date.size() != 10 || checkCaractersDate(date) == false) {
        std::cout << "Error: wrong date format" << std::endl;
        return (1);
    }
    splitDate = splitLine(date, '-');
    int year = atoi(splitDate[0].c_str());
    int month = atoi(splitDate[1].c_str());
    int day = atoi(splitDate[2].c_str());
    if((day < 1 || day > 31) || (year < 2009 || year > 2022) || (month < 1 || month > 12)) {
        std::cout << "Error: invalid date => " << date << std::endl;
        return (1);
    }
    else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
        std::cout << "Error: invalid date (wrong number days per month) => " << date << std::endl;
        return (1);
    }
    else if((month == 2 && (year % 4 == 0) && day > 29) || (month == 2 && (year % 4 != 0) && day > 28)) {
        std::cout << "Error: invalid date (february is 28d except bissextile year) => " << date << std::endl;
        return (1);
    }
    return (0);                
}

int checkValue(std::string value) 
{
    float valuef = std::atof(value.c_str());

    if(valuef < 0) {
        std::cout << "Error: not a positive number. " << valuef << std::endl;
        return (1);
    }
    else if (valuef > 1000) {
        std::cout << "Error: too large number. " << valuef << std::endl;
        return (1);
    }
    return (0);
                    
}

void checkInput(char *inputFile, std::vector <std::pair<std::string, float> > &data)
{
    std::vector<std::string> result;
    std::ifstream myinput(inputFile);
    std::string line;
    std::string value;
    std::string date;
    float bitcoin;

    if(myinput.is_open()) {
        std::getline(myinput, line);
        while(std::getline(myinput, line))
        {
            result = splitLine(line, '|');
            if(result.size() != 2) {
                std::cout << "Error: bad input => " << line << std::endl;
            }
            else {
                date = result[0];
                value = result[1];
                value.erase(std::remove_if(value.begin(), value.end(), isspace), value.end());
                date.erase(std::remove_if(date.begin(), date.end(), isspace), date.end());
                if(checkDate(date) == 0 && checkValue(value) == 0) 
                {
                    std::vector<std::pair<std::string, float> >::iterator it = data.begin();
                    std::vector<std::pair<std::string, float> >::iterator end = data.end();
                    for(; it != end; it++) {
                        if(strcmp((*it).first.c_str(), date.c_str()) != 0) {
                            bitcoin = (*it).second * (atof(value.c_str()));
                            std::cout << (*it).second << " & " << (atof(value.c_str())) << std::endl;
                            std::cout << date << " => " << value << " = " << bitcoin << std::endl;
                            break;
                        }
                        else {
                            std::cout << "take closer date" << std::endl;
                        }
                    }
                }
                else {
                   ;
                }
            }
        }
        myinput.close();
    }
    else {
        throw std::runtime_error("Error: could not open file");
    }
}

int main(int ac, char **av) {
    
    std::vector <std::pair<std::string, float> > data;

    if(ac != 2) {
        std::cout << "Usage : ./btc input.txt " << std::endl;
        return (1);
    }
    try
    {
        saveData(data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        checkInput(av[1], data);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}