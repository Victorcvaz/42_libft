NAME = libft.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c  \
	ft_isalpha.c     \
	ft_isascii.c     \
	ft_isdigit.c     \
	ft_isprint.c     \
	ft_strlen.c      \
	ft_tolower.c     \
	ft_toupper.c     \
	ft_strlcat.c     \
	ft_atoi.c        \
	ft_strlcpy.c     \
	ft_strnstr.c     \
	ft_memset.c      \
	ft_bzero.c       \
	ft_memchr.c      \
	ft_memcpy.c      \
	ft_memmove.c     \
	ft_memcmp.c      \
	ft_strdup.c      \
	ft_strchr.c      \
	ft_strrchr.c     \
	ft_strncmp.c     \
	ft_calloc.c      \
	ft_substr.c      \
	ft_strjoin.c     \
	ft_strtrim.c     \
	ft_split.c       \
	ft_itoa.c        \
	ft_strmapi.c     \
	ft_striteri.c    \
	ft_putchar_fd.c  \
	ft_putstr_fd.c   \
	ft_putendl_fd.c  \
	ft_putnbr_fd.c   

SRCS_BONUS = ft_lstnew.c \
	ft_lstadd_front.c    \
	ft_lstsize.c         \
	ft_lstlast.c         \
	ft_lstadd_back.c     \
	ft_lstdelone.c       \
	ft_lstclear.c        \
	ft_lstiter.c         \
	ft_lstmap.c          

OBJ_DIR = ./obj_dir
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
OBJS_BONUS = $(addprefix $(OBJ_DIR)/, $(SRCS_BONUS:.c=.o))

all: $(NAME) $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Object file created"

$(NAME): $(OBJ_DIR) $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(NAME) created"

bonus:
	@make OBJS="$(OBJS_BONUS)" --no-print-directory

clean:
	@echo "rm objs"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "rm $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
