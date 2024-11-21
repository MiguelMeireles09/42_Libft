NAME =	libft.a
CC =	cc
CFLAGS =	-Wall -Wextra -Werror -I. -I$(INC_DIR)
SRC_DIR =	src
OBJ_DIR =	obj
INC_DIR =	inc

FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
        ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
        ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
        ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
        ft_strrchr.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c \
        ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
        ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_split.c ft_putchar.c

BONUS_FILES = ft_lstclear.c ft_lstnew.c ft_lstdelone.c ft_lstadd_front.c ft_lstsize.c \
              ft_lstlast.c ft_lstadd_back.c ft_lstiter.c ft_lstmap.c

SRC = $(addprefix $(SRC_DIR)/, $(FILES))
BONUS = $(addprefix $(SRC_DIR)/, $(BONUS_FILES))

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJ = $(BONUS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
