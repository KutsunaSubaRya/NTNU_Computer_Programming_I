CC= gcc
CFLAGS= -Wall -Wextra -std=c11 -O2
LDLIBS= -lm
NAMEONE= hw0501
ONE= hw0501.o sort.o
NAMET= hw0502
TWO= hw0502.o det4.o
NAMETH= hw0503
THR= hw0503.o PP.o PC.o
NAMEFO= hw0504
FOU= hw0504.o LR.o
NAMEFI= hw0505
FIV= hw0505.o PM.o Op.o

.PHONY: all clean

all: hw0501 hw0502 hw0503 hw0504 hw0505

hw0501: hw0501.o sort.o
	$(CC) $(CFLAGS) -o $(NAMEONE) $(ONE)  $(LDLIBS)

hw0502: hw0502.o det4.o
	$(CC) $(CFLAGS) -o $(NAMET) $(TWO)  $(LDLIBS)

hw0503: hw0503.o PC.o PP.o
	$(CC) $(CFLAGS) -o $(NAMETH) $(THR)  $(LDLIBS)

hw0504: hw0504.o LR.o
	$(CC) $(CFLAGS) -o $(NAMEFO) $(FOU)  $(LDLIBS)

hw0505: hw0505.o PM.o Op.o
	$(CC) $(CFLAGS) -o $(NAMEFI) $(FIV)  $(LDLIBS)

clean:
	-rm -rf $(NAMEONE) $(ONE)
	-rm -rf $(NAMET) $(TWO)
	-rm -rf $(NAMETH) $(THR)
	-rm -rf $(NAMEFO) $(FOU)
	-rm -rf $(NAMEFI) $(FIV)

