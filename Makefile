# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/10 17:43:56 by ftome-ve          #+#    #+#              #
#    Updated: 2024/02/17 00:05:21 by ftome-ve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
LIBC	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isprint.c ft_strlcat.c \
		ft_strlen.c ft_strncmp.c ft_atoi.c ft_strlcpy.c ft_isalnum.c \
		ft_isascii.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_tolower.c \
		ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
		ft_itoa.c ft_split.c
		
BONUS_SRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c


OBJS	= $(SRCS:.c=.o)

BONUS_OBJS	= $(BONUS_SRCS:.c=.o)

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -I ./ -o $@
	
$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	@$(LIBC) $(NAME) $(BONUS_OBJS)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all .c.o clean fclean re bonus
