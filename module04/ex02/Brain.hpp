/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/16 11:22:09 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		virtual ~Brain(void);
		
	private:
		std::string	_ideas[100];
};

#endif