CC = cc
CFLAGS = -Wall -Wextra -Werror
LDLIBS = 

SRCS = Convert_name_v2.c dict_atoi_pos.c dict_check_validity.c \
       dict_get_num_word.c dict_make_static_key_arr.c dict_parse.c \
       dict_read.c dict_split.c dict_strcpy.c \
       fried_arg_handling.c fried_functions1.c \
       general_functions.c handle_mem.c main.c
OBJS = $(SRCS:.c=.o)

TARGET = rush-02

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET) $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all
