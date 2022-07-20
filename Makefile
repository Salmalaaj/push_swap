# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 08:08:31 by slaajour          #+#    #+#              #
#    Updated: 2022/07/19 10:29:07 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c check_args.c stack_a.c moves.c functions.c

FLAGS = -Wall -Wextra -Werror 
OBJS	= 	$(SRCS:.c=.o)

DEBUG = -fsanitize=address -g

NAME	= 	push_swap
RM		= 	@rm -f

all:	$(NAME)

$(NAME):
	@cc $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all