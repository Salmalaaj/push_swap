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

SRCS = push_swap.c check_args.c stack_a.c functions.c p_moves.c \
		rr_moves.c s_moves.c r_moves.c sort_small_numbers.c \
		sorting_first_steps.c 

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