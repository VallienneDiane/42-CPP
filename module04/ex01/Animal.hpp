/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:13:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:44:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"
#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal & operator=(const Animal &src);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		virtual ~Animal(void);
		
	protected:
		std::string _type;
};

#endif