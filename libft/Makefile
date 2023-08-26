# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabd-el- <gabd-el-@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 11:33:25 by gabd-el-          #+#    #+#              #
#    Updated: 2023/06/08 18:35:17 by gabd-el-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isnum.c ft_isprint.c ft_itoa.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_striteri.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_split.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_strtrim.c \
		ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strjoin.c


OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $?

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re