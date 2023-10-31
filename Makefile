all:programa

programa: sumar.o restar.o multiplicar.o dividir.o principal.o
	gcc principal.o sumar.o restar.o multiplicar.o dividir.o -o programa -g -Wall

principal.o: principal.c funciones.h
	gcc -c principal.c -o principal.o -g -Wall
	
sumar.o: sumar.c funciones.h
	gcc -c sumar.c -o sumar.o -g -Wall
	
restar.o: restar.c funciones.h
	gcc -c restar.c -o restar.o -g -Wall

multiplicar.o: multiplicar.c funciones.h
	gcc -c multiplicar.c -o multiplicar.o -g -Wall
	
dividir.o: dividir.c funciones.h
	gcc -c dividir.c -o dividir.o -g -Wall
	
clean:
	rm -f *.o
