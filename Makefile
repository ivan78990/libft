SRCS  = ft_memset.c \
	    ft_bzero.c \
	   	ft_memcpy.c \
	   	ft_memccpy.c \
	   	ft_memmove.c \
	  	ft_memchr.c \
	   	ft_memcmp.c \
	   	ft_strlen.c \
	   	ft_isalpha.c \
	   	ft_isdigit.c \
	   	ft_isalnum.c \
	   	ft_isascii.c \
	   	ft_isprint.c \
	   	ft_toupper.c \
	   	ft_tolower.c \
	   	ft_strchr.c \
	   	ft_strrchr.c \
	   	ft_strnstr.c \
	   	ft_strncmp.c \
	   	ft_strlcat.c \
	   	ft_strlcpy.c \
	   # ft_nstrlen.c \
	   # ft_strdup.c \
	   # ft_strcpy.c \
	   # ft_strncpy.c \
	   # ft_strcat.c \
	   # ft_strncat.c \

	   # ft_strstr.c \

	   # ft_strncmp.c \
	   # ft_strrev.c \
	   # ft_atoi.c \
	   # ft_memalloc.c \
	   # ft_memdel.c \
	   # ft_strnew.c \
	   # ft_strdel.c \
	   # ft_strclr.c \
	   # ft_striter.c \
	   # ft_striteri.c \
	   # ft_strmap.c \
	   # ft_strmapi.c \
	   # ft_strequ.c \
	   # ft_strnequ.c \
	   # ft_strsub.c \
	   # ft_strjoin.c \
	   # ft_multistrjoin.c \
	   # ft_strtrim.c \
	   # ft_strsplit.c \
	   # ft_strsplitwith.c \
	   # ft_strprefix.c \
	   # ft_strsuffix.c \
	   # ft_itoa.c \
	   # ft_utoa.c \
	   # ft_putchar.c \
	   # ft_putwchar.c \
	   # ft_putstr.c \
	   # ft_putwstr.c \
	   # ft_putnwstr.c \
	   # ft_putnstr.c \
	   # ft_putendl.c \
	   # ft_putnbr.c \
	   # ft_putnbrbase.c \
	   # ft_putchar_fd.c \
	   # ft_putwchar_fd.c \
	   # ft_putstr_fd.c \
	   # ft_putnstr_fd.c \
	   # ft_putwstr_fd.c \
	   # ft_putendl_fd.c \
	   # ft_putnbr_fd.c \

OBJS 	= ${SRCS:.c=.o}

HEAD	= libft.h
NAME 	= libft.a

CC		= gcc
RM 		= rm -f
CFLAGS 	= -Wall -Wextra -Werror
C 		= -c
O 		= -o
AR 		= ar rc

.c.o:
			${CC} ${CFLAGS} $(C) $< $(O) ${<:.c=.o}

$(NAME):	$(OBJS)	$(HEAD)
			$(AR) $(NAME) ${OBJS}

all: 		$(NAME)

clean:
			${RM} $(OBJS)

fclean: 	clean
			${RM} $(NAME)

re: 		fclean all

.PHONY: all, clean, fclean, re
