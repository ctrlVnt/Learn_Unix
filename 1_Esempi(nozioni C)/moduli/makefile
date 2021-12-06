main: applicazione.o somma.o prodotto.o
	gcc -o main applicazione.o somma.o prodotto.o

applicazione.o: applicazione.c
	gcc -c applicazione.c

somma.o: somma.c somma.h
	gcc -c somma.c

prodotto.o: prodotto.c prodotto.h
	gcc -c prodotto.c

clean:
	rm -f *.o

start:
	./main 5 3