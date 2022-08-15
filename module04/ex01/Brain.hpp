/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/15 16:10:55 by dvallien         ###   ########.fr       */
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
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i) const;
		~Brain(void);
	private:
		std::string	_ideas[100];
};

#endif