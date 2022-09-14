/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:16:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/14 16:48:26 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>

int	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	ifs_read(filename);
	std::ofstream	ofs_write(filename + ".replace");
	std::string		line;
	std::size_t		found_i;
	
	if (ifs_read.fail())
	{
		std::cout << "Error : read access denied" << std::endl;
		return (1);
	}
	while (!s1.empty() && std::getline(ifs_read, line))
	{
		found_i = line.find(s1);
		while (found_i != std::string::npos)
		{
			line.erase(found_i, s1.length());
			line.insert(found_i, s2);
			found_i += s2.size();
			found_i = line.find(s1, found_i);
		}
		ofs_write << line << std::endl;
	}
	ifs_read.close();
	ofs_write.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 4)
		replace(av[1], av[2], av[3]);
	else
		std::cout << "Usage : ./stream filename <s1> <s2>" << std::endl;
	return (0);
}