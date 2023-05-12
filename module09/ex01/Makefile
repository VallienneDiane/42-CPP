# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 19:55:31 by dvallien         #+#    #+#              #
#    Updated: 2023/04/08 20:18:49 by dvallien        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	RPN

PATH_OBJS	=	./.OBJS/

INCLUDES	= 	RPN.hpp

SRC			= 	main.cpp	\
				RPN.cpp

OBJS		=	$(addprefix $(PATH_OBJS), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJS) Makefile
			$(CPPC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o :	%.cpp $(INCLUDES)
					@mkdir -p $(PATH_OBJS)
					$(CPPC) $(CPPFLAGS) -c $< -o $@

clean :
			$(RM) $(PATH_OBJS)

fclean :		
			$(RM) $(PATH_OBJS) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re