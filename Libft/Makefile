LIBC = ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c  ft_striteri.c  ft_strncmp.c  ft_toupper.c
ft_bzero.c ft_isprint.c ft_memcmp.c ft_putnbr_fd.c   ft_strjoin.c   ft_strnstr.c  libft.h
ft_calloc.c   ft_itoa.c ft_memcpy.c ft_putstr_fd.c   ft_strlcat.c   ft_strrchr.c  Makefile
ft_isalnum.c  ft_memmove.c     ft_split.c       ft_strlcpy.c   ft_strtrim.c
ft_isalpha.c  ft_memset.c      ft_strchr.c      ft_strlen.c    ft_substr.c
ft_isascii.c  ft_putchar_fd.c  ft_strdup.c      ft_strmapi.c   ft_tolower.c

BONUS = ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c  ft_lstlast_bonus.c  ft_lstiter_bonus.c  ft_lstmap_bonus.c 

SRCS = ${LIBC}

SRCSALL = ${LIBC} ${BONUS}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o}

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar-rcs$(NAME) $(OBJS)

bonus: ${OBJSALL}
	ar -rcs $(NAME) $(OBJSALL)

all: $(NAME)

clean: 
	rm -f $(OBJSALL)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
