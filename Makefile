# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 08:08:31 by slaajour          #+#    #+#              #
#    Updated: 2022/08/08 09:48:50 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c check_args.c linked_list_stuff.c functions.c moves/p_moves.c \
		moves/rr_moves.c moves/s_moves.c moves/r_moves.c sorting/sort_small_numbers.c \
		sorting/sorting_first_steps.c sorting/sort_algorithm.c sorting/sorting_utils.c \
		sorting/small_functions.c

# FLAGS = -Wall -Wextra -Werror 
OBJS	= 	$(SRCS:.c=.o)

DEBUG = -fsanitize=address -g

NAME	= 	push_swap
RM		= 	@rm -f

all:	$(NAME)

$(NAME):
	@cc $(FLAGS) $(SRCS) -o $(NAME) $(DEBUG)

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all