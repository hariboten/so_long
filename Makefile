# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewatanab <ewatanab@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 14:55:05 by ewatanab          #+#    #+#              #
#    Updated: 2021/08/20 22:06:21 by ewatanab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRCDIR = ./src/
SRCNAMES = main.c
SRCS = $(addprefix $(SRCDIR), $(SRCNAMES))
OBJDIR = ./obj/
OBJS = $(SRCNAMES:%.c=$(OBJDIR)%.o)
INCLUDEDIR = ./include/
LMLX = -lmlx -lX11 -lXext

#LIBFTDIR = ./libft/
#LIBFT = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDEDIR) # -g -O0

all : $(OBJDIR) $(NAME)

$(NAME) : $(OBJS) # (LIBFT)
	$(CC) $(CFLAGS) -o $@ $^ $(LMLX) # -L $(LIBFTDIR) -lft

$(OBJDIR) :
	mkdir -p $@

$(OBJDIR)%.o : $(SRCDIR)%.c
	$(CC) $(CFLAGS) -c -o $@ $<

#(LIBFT)
#	make -C $(LIBFTDIR)

clean :
	rm -f $(OBJS)
#	make clean -C $(LIBFTDIR)

fclean : clean
	rm -f $(NAME)
#	make fclean -C $(LIBFTDIR)

re : fclean all

.phony: all fclean clean re
