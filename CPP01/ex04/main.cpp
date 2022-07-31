/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:16:39 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/31 18:10:04 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <fstream>

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	ifs(filename);
	// std::ofstream ofs(filename);
	std::string		buffer;
	(void)s1;
	(void)s2;
	
	ifs >> buffer;
	std::cout << buffer << std::endl;
	// ofs << s1 << s2 << std::endl;
	// std::cout << s1 << " " << s2 << std::endl;
	ifs.close();
	// ofs.close();
}

int main(int ac, char **av)
{
	(void)ac;
	std::string s1;
	std::string s2;
	
	s1 = "Je suis un cornichon";
	s2 = "Moule a gaufres";
	replace(av[1], s1, s2);

	return (0);
}