# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 20:27:56 by carlde-l          #+#    #+#              #
#    Updated: 2022/10/02 20:40:34 by carlde-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_strtrim.c
SRCSB	= ft_lstnew_bonus.c \
	  	ft_lstadd_front_bonus.c \
	  	ft_lstsize_bonus.c \
	  	ft_lstlast_bonus.c \
	  	ft_lstadd_back_bonus.c \
	  	ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
	  	ft_lstiter_bonus.c \
	  	ft_lstmap_bonus.c
OBJS	= $(SRCS:.c=.o)
OBJSB	= $(SRCSB:.c=.o)
NAME	= libft.a
RM		= /bin/rm -f
BONUS2  = .

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS2)
$(BONUS2):	$(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)
all:	$(NAME)
clean:
	$(RM) $(OBJS) $(OBJSB)
fclean:	clean
	$(RM) $(NAME)
re:		fclean $(NAME)

.PHONY: all clean fclean re bonus
