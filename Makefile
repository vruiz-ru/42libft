# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vruiz-ru <vruiz-ru@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 18:15:41 by vruiz-ru          #+#    #+#              #
#    Updated: 2024/03/01 05:44:30 by vruiz-ru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_isdigit.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \

OBJS	= $(SRCS:.c=.o)
#OBJS_B	= $(SRCS_B:.c=.o)
RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I${INCS}

$(NAME): ${OBJS} 
	${LIBC} $(NAME) $(OBJS) 

all: $(NAME)

#bonus: $(NAME) $(OBJS_B)
#	${LIBC} $(NAME) $(OBJS_B)

fclean: clean
	$(RM) $(NAME) #$(bonus)

clean:
	$(RM) -f $(OBJS) #$(OBJS_B)

re: fclean all

.PHONY: all clean fclean re .c.o
