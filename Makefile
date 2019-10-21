#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinwang <xinwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 19:12:56 by xinwang           #+#    #+#              #
#    Updated: 2019/10/21 13:47:28 by xinwang          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

###########
# GENERIC #
###########

# COLOR
GREEN       = \033[33;32m
YELLOW      = \033[33;33m
RED         = \033[33;31m
WHITE       = \033[33;37m
MAGENTA	 	= \e[95m

ARC_RED		= \e[41m
ARC_ORANGE	= \e[101m
ARC_YELLOW	= \e[43m
ARC_GREEN	= \e[102m
ARC_BLUE	= \e[44m
ARC_MAGENTA	= \e[45m
ARC_NC		= \e[49m

F_STATUS_0 = | xargs sh -c 'printf "$(GREEN)喜$(YELLOW)喜$(RED)喜 $(WHITE)$$0 $$1:    \t"'
F_STATUS_1 = echo "$(GREEN)DONE 喜$(YELLOW)喜$(RED)喜"


####################
# PROJECT SPECIFIC #
####################
NAME = libft.a

# C SOURCES CODE
SRC_NAME = ft_atoi.c         ft_split.c \
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

SRC_PATH = ./srcs/
SRCS = $(addprefix $(SRC_PATH),$(SRC_NAME))
SRCO = $(SRC_NAME:.c=.o)

SRC_BONUS_NAME = ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c		\

SRC_BONUS_PATH = ./srcs_bonus/
SRCS_BONUS =$(addprefix $(SRC_BONUS_PATH),$(SRC_BONUS_NAME))
SRCSO_BONUS =$(SRC_BONUS_NAME:.c=.o)

# HEADER DIR
HEADER = ./includes/

# Compilation
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra


#########
# RULES #
#########

$(NAME): all

all: nyancat
	@echo "Libft Compilation" $(F_STATUS_0)
	@ $(CC) $(CC_FLAGS) -c  $(SRCS) -I $(HEADER)
	@ ar rcs $(NAME) $(SRCO)
	@$(F_STATUS_1)

bonus: nyancat
	@echo "Bonus Compilation" $(F_STATUS_0)
	@ $(CC) $(CC_FLAGS) -c $(SRCS_BONUS) -I $(HEADER)
	@ ar rcs $(NAME) $(SRCSO_BONUS)
	@$(F_STATUS_1)

clean:
	@echo "Clean" $(F_STATUS_0)
	@ rm -f $(SRCO) $(SRCSO_BONUS)
	@ find . -name '*~' -delete
	@$(F_STATUS_1)

fclean: clean
	@echo "F-Clean" $(F_STATUS_0)
	@ rm -f $(NAME)
	@$(F_STATUS_1)

re: fclean all

nyancat:
	@ echo "$(MAGENTA)                             "
	@ clear
	@ echo "          ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄         "
	@ echo "        ▄▀░░░░░░░░░░░░▄░░░░░░░▀▄       "
	@ echo "        █░░▄░░░░▄░░░░░░░░░░░░░░█       "
	@ echo "$(ARC_RED)        $(ARC_NC)█░░░░░░░░░░░░▄█▄▄░░▄░░░█ ▄▄▄   "
	@ echo "$(ARC_ORANGE) ▄▄▄▄▄  $(ARC_NC)█░░░░░░▀░░░░▀█░░▀▄░░░░░█▀▀░██  "
	@ echo "$(ARC_YELLOW) $(ARC_NC)██▄▀██$(ARC_YELLOW)▄$(ARC_NC)█░░░▄░░░░░░░██░░░░▀▀▀▀▀░░░░██  "
	@ echo "$(ARC_GREEN)  ▀$(ARC_NC)██▄▀██░░░░░░░░▀░██▀░░░░░░░░░░░░░▀██ "
	@ echo "$(ARC_BLUE)    ▀$(ARC_NC)████░▀░░░░▄░░░██░░░$(GREEN)▄█$(MAGENTA)░░░░▄░$(GREEN)▄█$(MAGENTA)░░██ "
	@ echo "$(ARGC_MAGENTA)       ▀$(ARC_NC)█░░░░▄░░░░░██░░░░▄░░░▄░░▄░░░██ "
	@ echo "       ▄█▄░░░░░░░░░░░▀▄░░▀▀▀▀▀▀▀▀░░▄▀  "
	@ echo "      █▀▀█████████▀▀▀▀████████████▀    "
	@ echo "      ████▀   ███▀      ▀███  ▀██▀     "
	@ echo "\n       ♥♥♥  Maobe's Makefile  ♥♥♥\n"
