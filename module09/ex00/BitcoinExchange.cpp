/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vallienne <vallienne@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:58 by vallienne         #+#    #+#             */
/*   Updated: 2023/04/15 18:57:11 by vallienne        ###   ########.fr       */
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
        throw std::runtime_error("Error opening file");
    }
}

void checkInput(std::string inputFile)
{
    // std::cout << inputFile << std::endl;
}