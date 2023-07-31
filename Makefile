NAME = libft.a

SRCS = ft_isalnum.c \
	ft_isalpha.c    \
	ft_isascii.c    \
	ft_isdigit.c    \
	ft_isprint.c    \
	ft_strchr.c     \
	ft_strlen.c     \
	ft_tolower.c    \
	ft_toupper.c    \
	ft_strlcat.c    \
	ft_atoi.c       \
	ft_strlcpy.c    \
	ft_strnstr.c    \
	ft_memset.c     \
	ft_bzero.c      \
	ft_memchr.c     \
	ft_memcpy.c     \
	ft_memmove.c    \
	ft_memcmp.c     \
	ft_strdup.c     \
	ft_calloc.c     \
	ft_substr.c      

OBJ_DIR = ./obj/
OBJS = $(SRCS:.c=.o)
OBJS_PATH = $(addprefix $(OBJ_DIR), $(OBJS))

CC = gcc
FLAGS = -Wall -Wextra -Werror

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@
	echo "Object file created"

$(NAME): $(OBJS_PATH)
	ar rc $(NAME) $(OBJS_PATH)
	echo "libft.a created"

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

