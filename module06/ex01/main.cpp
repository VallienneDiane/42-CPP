/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:23:22 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/04 10:39:21 by dvallien         ###   ########.fr       */
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
	Data		data;
	Data		*deserial;
	uintptr_t	serial;
	
	data.x = 5;
	data.y = 15;
	
	std::cout << "Data address : " << &data << std::endl;
	std::cout << "Data values : " << data.x << ", " << data.y << std::endl;
	
	serial = serialize(&data);
	std::cout << "Serialize : " << serial << std::endl;

	deserial = deserialize(serial);
	std::cout << "Deserialize : " << &data << std::endl;
	std::cout << "Data values : " << data.x << ", " << data.y << std::endl;
	
	return (0);
}
