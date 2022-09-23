MyProject2 : main.o functionf.o functiong.o
	gcc main.o functionf.o functiong.o -o MyProject -lm

main.o : main.c
	gcc -c main.c -o main.o -lm

functionf.o : f.c
	gcc -c f.c -o functionf.o -lm

functiong.o : g.c
	gcc -c g.c -o functiong.o -lm