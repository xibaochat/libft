#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 14:33:10 by xinwang           #+#    #+#              #
#    Updated: 2019/10/18 13:17:38 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_atoi.c         ft_split.c \
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

SRC_BONUS = ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c		\

SRCO = $(SRC:.c=.o)
SRCO_BONUS = $(SRC_BONUS:.c=.o)

#SRC_PATH = $(addprefix srcs/,$(SRC))

#SRCO_PATH = $(addprefix srcs/,$(SRCO))

HEADER_DIR = includes

FLAG = -Wall -Werror -Wextra

$(NAME): all

all: $(SRCO)
		ar rc $(NAME) $(SRCO)
#		gcc -I $(HEADER_DIR) -c $(SRCO) $(FLAG)

bonus: $(SRCO_BONUS)
		ar rc $(NAME) $(SRCO) $(SRCO_BONUS)

clean:
		rm -f $(SRCO)
		rm -f $(SRCO_BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all
