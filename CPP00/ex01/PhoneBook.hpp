/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/28 17:58:04 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	createContact( int indexContact );
		void	getContact( int indexContact );
		void	getOneContact( int indexContact );
	
	private:
		Contact	contact[8];
};

#endif