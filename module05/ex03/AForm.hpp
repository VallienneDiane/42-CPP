/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:35:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/21 14:45:41 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H
# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string const name, int signGrade, int execGrade);
		AForm(const AForm &src);
		AForm & operator=(const AForm &src);
		virtual ~AForm(void);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		
		void				beSigned(Bureaucrat &bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;
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
		class GradeTooHighToExecute : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowToExecute : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
	private:
		std::string const	_name;
		int const			_signGrade;
		int const			_execGrade;
		bool				_signed;
};

std::ostream & operator<<(std::ostream &stream, const AForm &src);

#endif