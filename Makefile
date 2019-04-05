all: main.c graph.c
	 gcc -o main.x main.c graph.c -I.

clean: 
	rm *.x
