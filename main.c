#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdint.h>

void initSDL();

int main(int argc, char **argv){

	printf("Hello world!\n");
	return 0;
}

void initSDL(){
	SDL_Init(SDL_INIT_VIDEO);
}
