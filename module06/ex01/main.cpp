/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:23:22 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/03 18:12:33 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		test;
	Data		*test2;
	uintptr_t	serial;
	
	test.issue = 5;
	serial = serialize(&test);
	test2 = deserialize(serial);
	std::cout << serial << " " << test2->issue << std::endl;
}
