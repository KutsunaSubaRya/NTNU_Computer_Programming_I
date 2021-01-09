CC= gcc
CFLAGS= -Wall -Wextra -std=c11 -O2
LDLIBS= -lm
NAMEONE= hw0601
ONE= hw0601.o 
NAMET= hw0602
TWO= hw0602.o RaU.o
NAMETH= hw0603
THR= hw0603.o rota.o
NAMEFO= hw0604
FOU= hw0604.o proj.o
NAMEFI= hw0605
FIV= hw0605.o PA.o

.PHONY: all clean

all: hw0601 hw0602 hw0603 hw0604 hw0605

hw0601: hw0601.o
	$(CC) $(CFLAGS) -o $(NAMEONE) $(ONE)  $(LDLIBS)

hw0602: hw0602.o RaU.o
	$(CC) $(CFLAGS) -o $(NAMET) $(TWO)  $(LDLIBS)

hw0603: hw0603.o rota.o
	$(CC) $(CFLAGS) -o $(NAMETH) $(THR)  $(LDLIBS)

hw0604: hw0604.o proj.o
	$(CC) $(CFLAGS) -o $(NAMEFO) $(FOU)  $(LDLIBS)

hw0605: hw0605.o PA.o
	$(CC) $(CFLAGS) -o $(NAMEFI) $(FIV)  $(LDLIBS)

clean:
	-rm -rf $(NAMEONE) $(ONE)
	-rm -rf $(NAMET) $(TWO)
	-rm -rf $(NAMETH) $(THR)
	-rm -rf $(NAMEFO) $(FOU)
	-rm -rf $(NAMEFI) $(FIV)

