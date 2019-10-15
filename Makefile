NAME = libft.a

SRC = ft_atoi.c        ft_lstlast.c   ft_split.c \
	ft_bzero.c         ft_lstmap.c      ft_strchr.c \
	ft_calloc.c        ft_lstnew.c      ft_strdup.c \
	ft_isalnum.c       ft_lstsize.c     ft_strjoin.c \
	ft_isalpha.c       ft_memccpy.c     ft_strlcat.c \
	ft_isascii.c       ft_memchr.c      ft_strlcpy.c \
	ft_isdigit.c       ft_memcmp.c      ft_strlen.c \
	ft_isprint.c       ft_memcpy.c      ft_strmapi.c \
	ft_itoa.c          ft_memmove.c     ft_strncmp.c \
	ft_lstadd_back.c   ft_memset.c      ft_strnstr.c \
	ft_lstadd_front.c  ft_putchar_fd.c  ft_strtrim.c \
	ft_lstclear.c      ft_putendl_fd.c  ft_substr.c \
	ft_lstdelone.c     ft_putnbr_fd.c   ft_tolower.c \
	ft_lstiter.c       ft_putstr_fd.c   ft_toupper.c

SRC_PATH = $(addprefix srcs/,$(SRC))

SRCO = $(SRC:.c=.o)

HEADER_DIR = includes

all:
	gcc -I $(HEADER_DIR) -c $(SRC_PATH)
	ar rcs $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
