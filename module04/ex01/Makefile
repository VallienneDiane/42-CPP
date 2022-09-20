# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:30:10 by dvallien          #+#    #+#              #
#    Updated: 2022/09/20 14:08:26 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ideas

CPPC		=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

DIR_SRCS	:= ./srcs
DIR_OBJS	:= ./objs
DIR_INCS	:= ./incs

INCS		:=	Animal.hpp			\
				Dog.hpp				\
				Cat.hpp				\
				WrongAnimal.hpp		\
				WrongCat.hpp		\
				Brain.hpp

SRCS		:= 	Animal.cpp			\
				Dog.cpp				\
				Cat.cpp				\
				WrongAnimal.cpp		\
				WrongCat.cpp		\
				Brain.cpp			\
				main.cpp

LST_OBJS		:= $(SRCS:.cpp=.o)

INCS := $(addprefix $(DIR_INCS)/, $(INCS))
SRCS := $(addprefix $(DIR_SRCS)/, $(SRCS))
OBJS := $(addprefix $(DIR_OBJS)/, $(LST_OBJS))

all :		$(NAME)

$(NAME) :	$(OBJS) $(INCS) Makefile
			$(CPPC) $(OBJS) -o $(NAME)

$(DIR_OBJS):
		mkdir -p $(DIR_OBJS)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.cpp $(INCS) Makefile | $(DIR_OBJS)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
			$(RM) $(OBJS)
			$(RM) $(DIR_OBJS)

fclean : clean
			$(RM) $(NAME)
			
re :		fclean all
			
.PHONY:		all clean fclean re