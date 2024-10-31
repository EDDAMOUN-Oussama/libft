# cc = cc

# cflags= -Wall -Wextra -Werror

# src = $(shell find . -name "*.c" -type f)

# objc = $(src:.c=.o)

# name = t

# all: $(name) clean

# $(name): $(objc)
# 	$(cc) $(cflags) -o $(name) $(objc)

# %.o: %.c
# 	$(cc) $(cflags) -c -o $@ $<

# clean:
# 	@rm -rf $(objc)

# fclean:
# 	@rm -rf $(name)

# re: fclean all 


# ----------------------------------------------


CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS1  = ft_isalpha.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isascii.c \
			ft_isalnum.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c \
			ft_atoi.c \
			ft_strncmp.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_bzero.c \
			ft_memset.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_calloc.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

bonus = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c\
			ft_lstmap.c \

OBJS = $(SRCS1:.c=.o)

OBJS2 = $(bonus:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS2)
	ar rcs $(NAME) $(OBJS2)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean refclean re0
