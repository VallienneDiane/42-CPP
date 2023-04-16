/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:13:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/21 10:46:35 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"
# include <iostream>
# include <string>
/* Animal is an abstract class which contains here one abstract method. */
/* The abstract method makeSound is a method that is declared (= 0), but not implemented in the code.*/
/* In the derived classes Dog and Cat the makeSound become a virtual function */
/* A virtual function is a special form of member function that is declared within a base class and redefined by a derived class. */

class AAnimal
{
	protected:
		std::string _type;
		
	public:
		AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal & operator=(const AAnimal &src);
		virtual ~AAnimal(void);
		
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif