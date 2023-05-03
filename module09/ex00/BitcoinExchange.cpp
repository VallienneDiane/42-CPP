/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:58 by dvallien         #+#    #+#             */
/*   Updated: 2023/05/01 14:44:46 by dvallien        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

bool checkCharactersDate(std::string date)
{
    for(size_t i = 0; i < date.size(); i++) {
        if(date[i] != '-' && date[i] != ' ' && !isdigit(date[i]))
            return (false);
    }
    return (true);
}

int checkDate(std::string date) 
{
    std::vector<std::string> splitDate;
    
    if(date.size() != 11 || date[10] != ' ' || checkCharactersDate(date) == false) {
        std::cout << BLUE << "Error: invalid date => " << date << std::endl;
        return (1);
    }
    splitDate = splitLine(date, '-');
    if(splitDate[0].size() > 4 || splitDate[1].size() > 2 || splitDate[2].size() > 3) {
        std::cout << BLUE << "Error: invalid date => " << date << std::endl;
        return (1);
    }
    int year = atoi(splitDate[0].c_str());    
    int month = atoi(splitDate[1].c_str());
    int day = atoi(splitDate[2].c_str());
    if((day < 1 || day > 31) || (year < 2009) || (month < 1 || month > 12)) {
        std::cout << BLUE <<"Error: invalid date => " << date << std::endl;
        return (1);
    }
    else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
        std::cout << BLUE << "Error: invalid date => " << date << std::endl;
        return (1);
    }
    else if((month == 2 && (year % 4 == 0) && day > 29) || (month == 2 && (year % 4 != 0) && day > 28)) {
        std::cout << BLUE << "Error: invalid date 4=> " << date << std::endl;
        return (1);
    }
    return (0);                
}

int checkValue(std::string value) 
{
    size_t count = 0;
    std::vector<std::string> splitValue;
    
    splitValue = splitLine(value, ' ');
    if(splitValue.size() > 2) {
        std::cout << PURPLE << "Error: invalid number => " << value << std::endl;  
        return (1);
    }
    if(splitValue[0].size() > 1 || splitValue[0][0] != ' ') {
        std::cout << PURPLE << "Error: missing space before value => " << value << std::endl;  
        return (1);
    }
    for(size_t i = 0; i < splitValue[1].size(); i++) {
        if(!isdigit(splitValue[1][i]) && splitValue[1][i] != '.' && splitValue[1][i] != '-') {
            std::cout << PURPLE << "Error: not a number => " << splitValue[i] << std::endl;  
            return (1);
        }
        if(splitValue[1][i] == '.') {
            count++;
        }
        if(count > 1) {
            std::cout << PURPLE << "Error: not a float number => " << splitValue[1] << std::endl;
            return(1);
        }
    }
    float valuef = std::atof(splitValue[1].c_str());
    if(valuef < 0) {
        std::cout << PURPLE << "Error: not a positive number => " << valuef << std::endl;
        return (1);
    }
    else if (valuef > 1000) {
        std::cout << PURPLE << "Error: too large number => " << valuef << std::endl;
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
    float valuef;

    if(myinput.is_open()) {
        std::getline(myinput, line);
        if(strcmp(line.c_str(), "date | value") != 0) {
            std::cout << "Error: first line should be \"date | value\"" << std::endl;
            return;
        }
        while(std::getline(myinput, line))
        {
            result = splitLine(line, '|');
            if(result.size() != 2) {
                std::cout << ORANGE << "Error: invalid input => \"" << line << "\" " << std::endl;
            }
            else {
                date = result[0];;
                value = result[1];
                if(checkDate(date) == 0 && checkValue(value) == 0) 
                {
                    std::vector<std::pair<std::string, float> >::iterator it = data.begin();
                    std::vector<std::pair<std::string, float> >::iterator end = data.end()-1;
                    for(; it != end; it++) {
                        valuef = (atof(value.c_str()));
                        if(strcmp((*it).first.c_str(), date.c_str()) == 0) {                         
                            std::cout << WHITE << date << " => " << value << " = " << (valuef * ((*it).second)) << std::endl;
                        }
                        else if(((it+1) != end) && (strcmp((*(it+1)).first.c_str(), date.c_str()) > 0) && (strcmp((*it).first.c_str(), date.c_str()) < 0)) {
                            std::cout << WHITE << date << " => " << value << " = " << (valuef * ((*it).second)) << std::endl;
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