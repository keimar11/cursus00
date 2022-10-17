# TARGET = Libft
# NAME = libft.a
# SRCS =	ft_strlen.c \
# 		ft_strlcpy.c \
# 		ft_strlcat.c \
# 		ft_strchr.c \
# 		ft_strrchr.c \
# 		ft_strnstr.c \
# 		ft_strncmp.c \
# 		ft_memset.c \
# 		ft_bzero.c \
# 		ft_memcpy.c \
# 		ft_memchr.c \
# 		ft_memmove.c \
# 		ft_memcmp.c \
# 		ft_atoi.c \
# 		ft_isalpha.c \
# 		ft_isdigit.c \
# 		ft_isalnum.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_toupper.c \
# 		ft_tolower.c \
# 		ft_calloc.c \
# 		ft_strdup.c \
# 		ft_substr.c \
# 		ft_strjoin.c \
# 		ft_strtrim.c \
# 		ft_split.c \
# 		ft_itoa.c \
# 		ft_strmapi.c \
# 		ft_striteri.c\
# 		ft_putchar_fd.c \
# 		ft_putstr_fd.c \
# 		ft_putendl_fd.c \
# 		ft_putnbr_fd.c
# OBJS = $(SRCS:.c = .o)
# CC = gcc
# CFLAGS = -c -Wall -Werror -Wextra


CC := gcc
CFLAGS := -Wall -Wextra -Werror
NAME := test
SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
# OBJS := test1.o test2.o test3.o
OBJS := $(SRCS:.c=.o)
# SRCS := *.c
# OBJS := *.o

all: $(NAME)

# test: test1.o test2.o test3.o
$(NAME): $(OBJS)
# gcc -Wall -Wextra -Werror -o test test1.o test2.o test3.o
# gcc -Wall -Wextra -Werror -o $(NAME) $(OBJS)
ar rcs $(NAME) $(OBJS)
# $(CC) $(CFLAGS) -o $@ $^

# Not recommended
# test: test1.c test2.c test3.c
# 	gcc -Wall -Wextra -Werror test1.c test2.c test3.c

# $^ : (all) /:q!:wq
 $< : (only the first one)

# %.o: %.c
# 	gcc -Wall -Wextra -Werror -c $(SRCS)


# $(OBJS): $(SRCS)
# gcc -Wall -Wextra -Werror -c $(SRCS)
# ↑　does NOT work when srcs files are related

# .o.c:
# 	gcc -Wall -Wextra -Werror -c $(SRCS)
# ↑　old rule and not clear what it means

clean:
rm -f $(OBJS)

# -f option remove without confirmation (regardless of the file premission)

fclean: clean
rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re

