CC= gcc
CFLAGS= -Wall -Wextra -std=c11 -O2
LDLIBS= -lm
NAMEONE= hw0401
ONE= hw0401.o ro_nu.o
NAMET= hw0402-1
TWO= hw0402-1.o hanoi.o
NAMEEX= hw0402-2
EX= hw0402-2.o
NAMETH= hw0403
THR= hw0403.o Taylor.o
NAMEFO= hw0404
FOU= hw0404.o resist.o
NAMEFI= hw0405
FIV= hw0405.o BAC.o

.PHONY: all clean

all: hw0401 hw0402 hw04021 hw0403 hw0404 hw0405

hw0401: hw0401.o ro_nu.o
	$(CC) $(CFLAGS) -o $(NAMEONE) $(ONE)  $(LDLIBS)

hw0402: hw0402-1.o hanoi.o
	$(CC) $(CFLAGS) -o $(NAMET) $(TWO)  $(LDLIBS)

hw04021: hw0402-2.o
	$(CC) $(CFLAGS) -o $(NAMEEX) $(EX)  $(LDLIBS)

hw0403: hw0403.o Taylor.o
	$(CC) $(CFLAGS) -o $(NAMETH) $(THR)  $(LDLIBS)

hw0404: hw0404.o resist.o
	$(CC) $(CFLAGS) -o $(NAMEFO) $(FOU)  $(LDLIBS)

hw0405: hw0405.o BAC.o
	$(CC) $(CFLAGS) -o $(NAMEFI) $(FIV)  $(LDLIBS)

clean:
	-rm -rf $(NAMEONE) $(ONE)
	-rm -rf $(NAMET) $(TWO)
	-rm -rf $(NAMEEX) $(EX)
	-rm -rf $(NAMETH) $(THR)
	-rm -rf $(NAMEFO) $(FOU)
	-rm -rf $(NAMEFi) $(FIV)
