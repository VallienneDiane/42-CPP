# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:30:10 by dvallien          #+#    #+#              #
#    Updated: 2022/08/21 16:19:35 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	allform

PATH_OBJS	=	./.OBJS/

INCLUDES	=	Bureaucrat.hpp		\
				AForm.hpp			\
				PresidentialPardonForm.hpp	\
				RobotomyRequestForm.hpp		\
				ShrubberyCreationForm.hpp	\

SRC			= 	Bureaucrat.cpp				\
				AForm.cpp					\
				PresidentialPardonForm.cpp	\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp	\
				main.cpp

OBJS		=	$(addprefix $(PATH_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS) Makefile
			$(CPPC) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :	%.cpp $(INCLUDES)
					@mkdir -p $(PATH_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(PATH_OBJS)

fclean :		
			$(RM) $(PATH_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re