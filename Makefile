CC = cc

CFLAGS = -Wall -Wextra -Werror -Iheaders 

NAME = libft.a

SRCS = $(wildcard libft/*.c) 

OBJS_DIR := objs

OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o) 

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@ $(CFLAGS)

$(OBJS_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@	



all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re bonus




