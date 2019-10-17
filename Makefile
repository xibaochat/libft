#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xwang <xwang@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 16:53:51 by xwang             #+#    #+#              #
#    Updated: 2019/10/17 20:02:57 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
STATIC_LIB = libft.a
DYNAMIC_LIB = libft.so

SRC = ft_atoi.c        ft_lstlast.c   ft_split.c \
	ft_bzero.c         ft_lstmap.c      ft_strchr.c \
	ft_calloc.c        ft_lstnew.c      ft_strdup.c \
	ft_isdigit.c       ft_lstsize.c     ft_strjoin.c \
	ft_isalpha.c       ft_memccpy.c     ft_strlcat.c \
	ft_isascii.c       ft_memchr.c      ft_strlcpy.c \
	ft_isalnum.c       ft_memcmp.c      ft_strlen.c \
	ft_isprint.c       ft_memcpy.c      ft_strmapi.c \
	ft_itoa.c          ft_memmove.c     ft_strncmp.c \
	ft_lstadd_back.c   ft_memset.c      ft_strnstr.c \
	ft_lstadd_front.c  ft_putchar_fd.c  ft_strtrim.c \
	ft_lstclear.c      ft_putendl_fd.c  ft_substr.c \
	ft_lstdelone.c     ft_putnbr_fd.c   ft_tolower.c \
	ft_lstiter.c       ft_putstr_fd.c   ft_toupper.c \
	ft_strrchr.c

SRC_PATH = $(addprefix srcs/,$(SRC))

SRCO = $(SRC:.c=.o)

HEADER_DIR = includes

COMPILE_FLAGS = -Wall -Wextra -Werror

all: $(STATIC_LIB)

#${NAME}: $(STATIC_LIB)

$(NAME): $(OBJ)
	@ gcc ${COMPILE_FLAG} -I $(HEADER_DIR) -c $(SRC_PATH)
	@ ar rcs $(STATIC_LIB) $(SRCO)

so:
	@ gcc -I $(HEADER_DIR) -fPIC -c $(SRC_PATH)
	@ cc -shared -Wl,-soname,$(DYNAMIC_LIB) -o $(DYNAMIC_LIB) *.o


clean:
	@ rm -f $(SRCO)

fclean: clean
	@ rm -f $(STATIC_LIB)
	@ rm -f $(DYNAMIC_LIB)

re: fclean all
