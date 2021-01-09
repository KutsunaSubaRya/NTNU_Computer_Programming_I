CC= gcc
CFLAGS= -Wall -Wextra -std=c11 -O2
LDLIBS= -lm
NAMEONE= hw0601
ONE= hw0601.o 
NAMET= hw0602
TWO= hw0602.o RaU.o
NAMETH= hw0603
THR= hw0603.o rota.o

.PHONY: all clean

all: hw0601 hw0602 hw0603

hw0601: hw0601.o
	$(CC) $(CFLAGS) -o $(NAMEONE) $(ONE)  $(LDLIBS)

hw0602: hw0602.o RaU.o
	$(CC) $(CFLAGS) -o $(NAMET) $(TWO)  $(LDLIBS)

hw0603: hw0603.o rota.o
	$(CC) $(CFLAGS) -o $(NAMETH) $(THR)  $(LDLIBS)

clean:
	-rm -rf $(NAMEONE) $(ONE)
	-rm -rf $(NAMET) $(TWO)
	-rm -rf $(NAMETH) $(THR)

