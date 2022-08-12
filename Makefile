# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 08:08:31 by slaajour          #+#    #+#              #
#    Updated: 2022/08/12 03:32:36 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c check_args.c linked_list_stuff.c functions.c moves/p_moves.c \
		moves/rr_moves.c moves/s_moves.c moves/r_moves.c sorting/sort_small_numbers.c \
		sorting/sorting_first_steps.c sorting/sort_algorithm.c sorting/sorting_utils.c \
		sorting/small_functions.c

SRCS_BONUS = bonus/checker.c bonus/checker_utils.c bonus/checker_utils0.c bonus/checker_utils1.c \
			check_args.c linked_list_stuff.c bonus/get_next_line/get_next_line.c \
			bonus/get_next_line/get_next_line_utils.c functions.c


FLAGS	= -Wall -Wextra -Werror 
OBJS	= $(SRCS:.c=.o)
OBJSBNS	= $(SRCS_BONUS:.c=.o)
NAME	= push_swap
BONUS	= checker
RM		= @rm -f

$(NAME): $(OBJS)
	cc $(FLAGS) $(SRCS) -o $(NAME)

all:	$(NAME) bonus

bonus: $(OBJSBNS)
	cc $(FLAGS) $(SRCS_BONUS) -o $(BONUS) 
	
clean:
	${RM} ${NAME} ${BONUS}

fclean:	clean
	${RM} ${OBJS}
	${RM} ${OBJSBNS}

re:		fclean all
