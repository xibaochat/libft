#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 19:12:56 by xinwang           #+#    #+#              #
#    Updated: 2019/10/21 21:05:35 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = ft_atoi.c         ft_split.c \
		ft_bzero.c		ft_strchr.c \
		ft_calloc.c              ft_strdup.c \
		ft_isdigit.c            ft_strjoin.c \
		ft_isalpha.c       ft_memccpy.c     ft_strlcat.c \
		ft_isascii.c       ft_memchr.c      ft_strlcpy.c \
		ft_isalnum.c       ft_memcmp.c      ft_strlen.c \
		ft_isprint.c       ft_memcpy.c      ft_strmapi.c \
		ft_itoa.c          ft_memmove.c     ft_strncmp.c \
		ft_memset.c      ft_strnstr.c \
		ft_putchar_fd.c  ft_strtrim.c \
		ft_putendl_fd.c  ft_substr.c \
		ft_putnbr_fd.c   ft_tolower.c \
		ft_putstr_fd.c   ft_toupper.c \
		ft_strrchr.c

SRCO = $(SRCS:.c=.o)

SRCS_BONUS = ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c

SRCSO_BONUS =$(SRCS_BONUS:.c=.o)


CC = /usr/bin/gcc
CC_FLAGS = -Wall -Werror -Wextra


$(NAME): all

all:
	@ $(CC) $(CC_FLAGS) -c  $(SRCS) ${SRCS_BONUS}
	@ /usr/bin/ar rcs $(NAME) $(SRCO) ${SRCSO_BONUS}

bonus:
	@ $(CC) $(CC_FLAGS) -c $(SRCS_BONUS)
	@ ar rcs $(NAME) $(SRCSO_BONUS)

clean:
	@ rm -f $(SRCO) $(SRCSO_BONUS)
	@ find . -name '*~' -delete

fclean: clean
	@ rm -f $(NAME)

re: fclean all
