# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 18:36:03 by jihong            #+#    #+#              #
#    Updated: 2021/12/09 17:49:38 by jihong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c \
			ft_tolower.c ft_toupper.c \
			ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
			ft_strlen.c ft_strlcpy.c ft_strdup.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strlcat.c ft_strchr.c \
			ft_calloc.c ft_bzero.c ft_atoi.c ft_itoa.c ft_strtrim.c \
			ft_substr.c ft_strjoin.c ft_atoi.c ft_strmapi.c ft_split.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
			ft_striteri.c

SRCS_BN	= ft_lstnew.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}
OBJS_BN	= ${SRCS_BN:.c=.o}
INCS	= includes
LIBC	= ar rcs
LIBR	= ranlib
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(OBJS_BN)
else
	OBJECTS = $(OBJS)
endif

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: $(OBJECTS)
	${LIBC} $@ $^
	${LIBR} ${NAME}

bonus:
	@make WITH_BONUS=1 all

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_BN}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o bonus
