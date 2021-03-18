OBJS	= main.o menu.o dicionario.o leituraTR.o DistEuclid.o
SOURCE	= main.c menu.c dicionario.c leituraTR.c DistEuclid.c
HEADER	= menu.h dicionario.h leituraTR.h DistEuclid.h
OUT	= prog
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

menu.o: menu.c
	$(CC) $(FLAGS) menu.c 

dicionario.o: dicionario.c
	$(CC) $(FLAGS) dicionario.c 

leituraTR.o: leituraTR.c
	$(CC) $(FLAGS) leituraTR.c

DistEuclid.o: DistEuclid.c
	$(CC) $(FLAGS) DistEuclid.c

clean:
	rm -f $(OBJS) $(OUT)