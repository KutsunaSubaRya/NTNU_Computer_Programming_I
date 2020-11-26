CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -O2
TARGETS=hw0201 hw0202 hw0203 hw0204 hw0205 hw0206

.PHONY: all

all: $(TARGETS) 

.SECONDEXPANSION:
$(TARGETS): %: $$*.o

%.o: $@.c

clean:
	rm -rf $(TARGETS) $(addsuffix .o,$(TARGETS))
