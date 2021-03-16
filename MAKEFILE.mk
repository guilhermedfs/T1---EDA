OBJS	= main.o menu.o dicionario.o
SOURCE	= main.c menu.c dicionario.c
HEADER	= menu.h dicionario.h
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


clean:
	rm -f $(OBJS) $(OUT)