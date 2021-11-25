CC=gcc
FLAGS= -Wall -g

all:connections

connections: main.o libmy_mat.a
	$(CC) $(FLAGS) -o connections main.o libmy_mat.a

libmy_mat.a: my_mat.o
	ar -rcs libmy_mat.a my_mat.o

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c


.PHONY: clean all

clean:
	rm -f *.o *.a run