default: my_tunes.o tune.o art.o
	gcc -o test my_tunes.o tune.o

my_tunes.o: my_tunes.c tune.h art.h
	gcc -c my_tunes.c

tune.o: tune.c tune.h
	gcc -c tune.c

art.o: art.c art.h
	gcc -c art.c

run:
	./test

clean:
	rm -f *~ *.exe *.out *.o test 