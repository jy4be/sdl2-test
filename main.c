#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdint.h>

void initSDL();
void destroySDL();
void handleInput();

int main(int argc, char **argv){
	initSDL();

	SDL_Window *window = SDL_CreateWindow("Test01",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,640,480,0);
	if(window == NULL){
		printf("Unable to Open SDL-Window: %s\n:", SDL_GetError());
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	if(renderer == NULL){
		printf("Unable to Create SDL-Renderer: %s\n", SDL_GetError());
	}





	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	destroySDL();
	printf("Hello world!\n");
	return 0;
}

void handleInput(){
		SDL_Event event;
	}

void initSDL(){
	if(SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("Failed to Initialize SDL with Error %s\n", SDL_GetError());
		exit(1);
	}
}

void destroySDL(){
	SDL_Quit();
}
