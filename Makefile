# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 08:08:31 by slaajour          #+#    #+#              #
#    Updated: 2022/05/25 08:34:09 by slaajour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
		check_args.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		cc $(FLAGS) -c $(SRCS)
		@ar rcs $(NAME) $(OBJS)

clean:
		@rm -rf $(OBJS)

fclean: clean
		@rm -rf $(NAME)
	
re: fclean all
		