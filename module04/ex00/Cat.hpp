/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:21:57 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 11:26:42 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		virtual void makeSound(void) const;
		virtual ~Cat(void);
};

#endif