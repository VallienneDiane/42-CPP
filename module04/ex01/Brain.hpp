/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:28:25 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 15:05:02 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	_ideas[100];
		
	public:
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		virtual ~Brain(void);	
};

#endif