CC = gcc 
AR = ar
FLAGS= -Wall -g

OBJEKTS_MAIN=main.c
OBJEKTS_MAINO=main.o


main: $(OBJEKTS_MAINO) my_math.o my_math.h
	$(CC) -o connections $(OBJEKTS_MAINO) my_math.o 


main.o: $(OBJEKTS_MAIN) my_math.h
	$(CC) $(FLAGS) -c $(OBJEKTS_MAIN) 

my_math.o: my_math.c my_math.h
	$(CC) $(FLAGS) -c my_math.c 


clean:
	rm -f *.o connections *.a


