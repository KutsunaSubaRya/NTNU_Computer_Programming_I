CC=gcc
CFLAGS= -Wall -Wextra -std=c11 -O2
LDLIBS= -lm
NAME=mid04
OBJECTS= mid04.o menu.o
TARGETS= mid01 mid03
.PHONY: all

all: $(TARGETS) test

test: $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LDLIBS)

.SECONDEXPANSION:

$(TARGETS): %: $$*.o

$.o: $@.c

clean:
	rm -rf $(TARGETS) $(addsuffix .o,$(TARGETS))
	rm $(NAME) $(OBJECTS)
