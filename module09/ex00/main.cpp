/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vallienne <vallienne@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:38 by vallienne         #+#    #+#             */
/*   Updated: 2023/04/16 18:53:44 by vallienne        ###   ########.fr       */
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

int checkDate(std::string date) 
{
    remove_if(date.begin(), date.end(), isspace);
    
    return (0);
                    
}

int checkValue(std::string value) 
{
    float valuef = std::atof(value.c_str());
    
    remove_if(value.begin(), value.end(), isspace);
    if(valuef < 0)
        std::cout << "Error: not a positive number." << valuef << std::endl;
    if (valuef > 1000)
        std::cout << "Error: too large number. " << valuef << std::endl;
    return (0);
                    
}

void checkInput(char *inputFile, std::vector <std::pair<std::string, float> > &data)
{
    std::vector<std::string> result;
    std::ifstream myinput(inputFile);
    std::string line;
    (void)data;
    
    if(myinput.is_open()) {
        std::getline(myinput, line);
        while(std::getline(myinput, line))
        {
            result = splitLine(line, '|');
            if(result.size() != 2) {
                std::cout << "Error: bad input => " << line << std::endl;
            }
            std::string date = result[0];
            std::string value = result[1];
            if(checkDate(date) == 0) {
                //si la date est dans data.csv alors super
                std::vector<std::pair<std::string, float> >::iterator it = data.begin();
                std::vector<std::pair<std::string, float> >::iterator end = data.end();
                for(; it != end; it++) {     
                    if(date == (*it).first) {
                        if (checkValue(value) == 0) {
                            std::cout << date << " => " << value << " = " << (*it).second << std::endl;
                        }
                    }
                    else {
                        //prendre la date avant
                    }
                }
            }
            else {
                std::cout << "Error: wrong date format" << std::endl;
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