/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:07:16 by dvallien          #+#    #+#             */
/*   Updated: 2022/07/13 11:59:15 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook( void );
		void	addContact( void );
		void	searchContact( void );
		void	exit( void );
		~ PhoneBook( void );

	private:
		int		_nb_contact;
		Contact _contact[8];
		
};

#endif