#include"moteur.h"

int main()
{
	SDL_Init(SDL_INIT_VIDEO);

	SDL_Event event;

	SDL_Renderer * rend = NULL;

	int cont = 1;

	SDL_Window * window = NULL;
	window = SDL_CreateWindow("PIXEL",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,500,500,0);
	rend = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);

	while(cont)
	{
		SDL_PollEvent(&event);
		switch(event.type)
		{
			case SDL_KEYDOWN:
				cont = 0;
				break;
		}
		SDL_SetRenderDrawColor(rend,0,0,0,0);
		SDL_RenderClear(rend);
		SDL_RenderPresent(rend);
		SDL_Delay(16);
	}

	SDL_DestroyRenderer(rend);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;	
}
