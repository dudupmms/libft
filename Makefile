# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edpereir <edpereir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:24:44 by edpereir          #+#    #+#              #
#    Updated: 2024/10/14 17:00:53 by edpereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

INCLUDES	= libft.h

SRC				= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
					ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
					ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
					ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c \
					ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strlcat.c \
					ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strmapi.c \
					ft_strtrim.c ft_strjoin.c ft_itoa.c ft_split.c
OBJ				= $(SRC:.c=.o)

CC				= cc
CCFLAGS			= -Wall -Wextra -Werror

AR				= ar rcs
RM				= rm -fr

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
