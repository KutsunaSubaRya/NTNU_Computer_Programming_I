CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -O2
TARGETS=hw0301 hw0302 hw0303 hw0304 hw0305

.PHONY: all

all: $(TARGETS) 

.SECONDEXPANSION:
$(TARGETS): %: $$*.o

%.o: $@.c

clean:
	rm -rf $(TARGETS) $(addsuffix .o,$(TARGETS))
