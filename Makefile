# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <ifreire-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 15:21:04 by ifreire-          #+#    #+#              #
#    Updated: 2022/10/17 16:33:40 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#OBJS_Wildcard	= $(wildcard *.c)

SRC				= push_swap.c srcs/pa.c srcs/pb.c \
				srcs/ra.c srcs/rb.c srcs/rr.c \
				srcs/rra.c srcs/rrb.c srcs/rrr.c \
				srcs/sa.c srcs/sb.c srcs/ss.c \
				algo3_5.c algo100_500.c \
				error_free.c parse.c \
				libft/ft_isdigit.c libft/ft_isalpha.c \
				libft/ft_isalnum.c libft/ft_isascii.c \
				libft/ft_isprint.c libft/ft_strlen.c \
				libft/ft_memset.c libft/ft_bzero.c \
				libft/ft_memcpy.c libft/ft_memmove.c \
				libft/ft_strlcpy.c libft/ft_strlcat.c \
		  		libft/ft_toupper.c libft/ft_tolower.c \
				libft/ft_strchr.c libft/ft_strrchr.c \
				libft/ft_strncmp.c libft/ft_memchr.c \
				libft/ft_memcmp.c libft/ft_strnstr.c \
				libft/ft_atoi.c libft/ft_calloc.c \
				libft/ft_strdup.c libft/ft_substr.c \
				libft/ft_strjoin.c libft/ft_strtrim.c \
				libft/ft_split.c libft/ft_itoa.c \
				libft/ft_strmapi.c libft/ft_striteri.c \
				libft/ft_putchar_fd.c libft/ft_putstr_fd.c \
				libft/ft_putendl_fd.c libft/ft_putnbr_fd.c
				
OBJ				= $(SRC:.c=.o)

CC				= gcc

#CFLAGS			= -Wall -Wextra -Werror

NAME			= push_swap

%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@

all:			$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -fsanitize=address -g -o $(NAME)

#$(NAME):		$(OBJS_O)
#				ar rcs $(NAME) $(OBJS_O)
#				ranlib $(NAME)

clean:
				rm -f $(OBJ)

fclean: 		clean
				rm -f $(NAME)

re: 			fclean $(NAME)

.PHONY: all clean fclean re