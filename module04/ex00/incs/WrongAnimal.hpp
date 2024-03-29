/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:29:37 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 13:47:16 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal & operator=(const WrongAnimal &src);
		~WrongAnimal(void);
		
		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif