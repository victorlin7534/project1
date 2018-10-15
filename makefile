default: my_tunes.o tune.o lib.o
	gcc -o test my_tunes.o tune.o lib.o

my_tunes.o: my_tunes.c tune.h lib.h
	gcc -c my_tunes.c

tune.o: tune.c tune.h
	gcc -c tune.c

lib.o: lib.c lib.h
	gcc -c lib.c

run:
	./test

clean:
	rm -f *~ *.exe *.out *.o test 
