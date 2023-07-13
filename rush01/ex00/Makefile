# Makefile for rush01

include config.mk

NAME?=rush-01

SRC=gen_util.c handle_input.c handle_mem.c main.c backtrack.c is_valid_state.c get_cur_pos.c
HEADERS=gen_util.h handle_input.h handle_mem.h backtrack.h

_OBJ=$(SRC:.c=.o)

DEPS=$(patsubst %,$(INCDIR)/%,$(HEADERS))
OBJ=$(patsubst %,$(OBJDIR)/%,$(_OBJ))

.PHONY: clean install uninstall fclean all re test

all: $(BUILDDIR)/$(NAME)

$(BUILDDIR)/$(NAME): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.c $(DEPS)
	# norminette $<
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	$(RM) $(OBJ)
	$(RM) $(INCDIR)/*~
	$(RM) *~

fclean: clean
	$(RM) $(BUILDDIR)/*

install: all
	$(MKDIR) $(DESTDIR)$(PREFIX)/bin
	$(CP) $(BUILDDIR)/$(NAME) $(DESTDIR)$(PREFIX)/bin
	$(CHMOD) 755 $(DESTDIR)$(PREFIX)/bin/$(NAME)

uninstall:
	$(RM) $(DESTDIR)$(PREFIX)/bin/$(NAME)

re: fclean all

SUCCESS=printf '\n\033[32m%s\033[m\n\n' "Success"
FAIL=printf '\n\033[31m%s\033[m\n\n' "Fail"
test: re
	$(BUILDDIR)/$(NAME)                                            && $(FAIL) || $(SUCCESS)
	$(BUILDDIR)/$(NAME) "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 "         && $(FAIL) || $(SUCCESS)
	$(BUILDDIR)/$(NAME) "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 6"          && $(FAIL) || $(SUCCESS)
	$(BUILDDIR)/$(NAME) "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 a"          && $(FAIL) || $(SUCCESS)
	$(BUILDDIR)/$(NAME) "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" whatever && $(FAIL) || $(SUCCESS)
	$(BUILDDIR)/$(NAME) "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"          && $(SUCCESS) || $(FAIL)
