/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 14:10:18 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string const name, int signGrade, int execGrade);
		Form(const Form &src);
		Form & operator=(const Form &src);
		~Form(void);

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
		
	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int	const			_execGrade;
};

std::ostream & operator<<(std::ostream &stream, const Form &src);

#endif