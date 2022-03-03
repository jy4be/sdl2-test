default:
	gcc main.c -lSDL2 -lSDL2main -o main.o

clean:
	rm -rf main.o
