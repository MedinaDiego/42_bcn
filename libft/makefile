CFLAGS = -Wall -Werror -Wextra
RM = rm -f
NAME = libft.a
.PHONY : all clean fclean re

SRCS = ft_calloc.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_bzero.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memmove.c \
	 ft_memset.c  \
	 ft_tolower.c \
	 ft_toupper.c \
	 ft_atoi.c \
	 ft_memcpy.c \
	 ft_strchr.c \
	 ft_strlen.c \
	 ft_strrchr.c \
	 ft_strncmp.c \
	 ft_strlcpy.c \
	 ft_strnstr.c \
	 ft_strlcat.c \
	 ft_strdup.c \
	 ft_substr.c


OBJ = $(SRCS:.c=.o)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)
CC = gcc


all: $(NAME)

clean:
	@echo "cleaning up bj files ..."
	@$(RM) $(OBJ)

fclean : 
	@echo "cleaning up obj and archive files ... "
	@$(RM) $(NAME) $(OBJ)

re : fclean all
