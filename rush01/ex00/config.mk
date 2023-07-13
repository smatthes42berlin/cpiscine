# Configuration for rush01's Makefile

# paths
PREFIX=~/.local
INCDIR=include
OBJDIR=obj
BUILDDIR=build
DIRS=
DIRS+=$(INCDIR)
DIRS+=$(OBJDIR)
DIRS+=$(BUILDDIR)

# includes
INCS=-I$(INCDIR)

# flags
CFLAGS=
CFLAGS+=-Wall
CFLAGS+=-Wextra
#CFLAGS+=-Werror
CFLAGS+=$(INCS)
LDFLAGS=

# compiler and linker
CC=cc

# other executables
RM=/bin/rm -f
MKDIR=/bin/mkdir -p
CP=/bin/cp -f
CHMOD=/bin/chmod
