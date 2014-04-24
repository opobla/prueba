hilos: hilos.c estrella.o cruz.o
	gcc -g -o hilos hilos.c estrella.o cruz.o

estrella.o: estrella.c estrella.h
	gcc -g -c -o estrella.o estrella.c

cruz.o: cruz.c cruz.h
	gcc -g -c -o cruz.o cruz.c
