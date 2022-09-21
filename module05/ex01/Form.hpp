/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/19 16:34:59 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int	const			_execGrade;
		
	public:
		Form(void);
		Form(const Form &src);
		Form & operator=(const Form &src);
		~Form(void);

		Form(std::string const name, int signGrade, int execGrade);
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		
		void		beSigned(Bureaucrat &bureaucrat);
		
		class	GradeTooHighException : public std::exception
		{
			public :
				virtual const char * what() const throw();
			
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream &stream, const Form &src);

#endif