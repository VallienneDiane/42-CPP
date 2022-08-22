/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:54:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/22 13:24:29 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define GREY "\x1B[30m"
# define WHITE "\x1B[37m"
# include <iostream>
# include <string>
# include "AForm.hpp"
class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat & operator=(const Bureaucrat &src);
		~Bureaucrat(void);
		
		const std::string	getName(void) const;
		int 				getGrade(void) const;
		int 				incrementGrade(void);
		int 				decrementGrade(void);
		void				signForm(AForm &form);
		void				executeForm(AForm const & form);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat &src);

#endif