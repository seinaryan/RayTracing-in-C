#include<stdio.h>
#include<SDL2/SDL.h>

#define WIDTH 900
#define HEIGHT 600

#define COLOR_WHITE 0xffffffff

int main() {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow("Raytracing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
	SDL_Surface * surface = SDL_GetWindowSurface(window);

	for(int i = 1; i < 10; i++) {
		int side = i*i;
		SDL_Rect rect2 = (SDL_Rect) {side, side, side,side};
		SDL_FillRect(surface, &rect2, COLOR_WHITE);
		SDL_UpdateWindowSurface(window);
		SDL_Delay(1000);
		
	}
	SDL_Rect rect = (SDL_Rect) {200,200,200,200};
	
	SDL_Delay(5000);
}
