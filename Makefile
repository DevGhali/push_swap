# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 21:29:09 by gabd-el-          #+#    #+#              #
#    Updated: 2023/07/14 21:31:22 by gabd-el-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
GCC = gcc
FLAGS = -Wall -Werror -Wextra

SRCS = src/push_swap.c src/handle_args.c src/index.c src/instructions.c \
		src/operations.c src/radix_sort.c src/simple_sort.c src/sort.c \
		src/t_list.c src/utils.c

OBJS = $(SRCS:.c=.o)

LIBFT_MAKE = make all -C ./libft

RM = rm -rf

all: $(NAME)

%.o: %.c
	$(GCC) -g -c $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(LIBFT_MAKE)
	$(GCC) $(CFLAGS) -g -o $(NAME) $(OBJS) ./libft/libft.a
	make clean

clean:
	@${RM} $(OBJS)
	make fclean -C libft

fclean: clean
	@${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re