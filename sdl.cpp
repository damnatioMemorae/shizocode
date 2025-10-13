#include <SDL2/SDL.h>
#include <random>

int main(int argc, char *argv[])
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		return 1;
	}

	SDL_Window *window = nullptr;
	SDL_Renderer *renderer = nullptr;

	if (SDL_CreateWindowAndRenderer(2000, 2000, 0, &window, &renderer) !=
	    0) {
		SDL_Quit();
		return 1;
	}

	SDL_RenderSetScale(renderer, 20, 20);

	int x{ 25 };
	int y{ 25 };

	std::random_device dev;
	std::uniform_int_distribution<uint8_t> nd(0, 3);

	bool running = true;
	while (running) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
			}
		}

		uint8_t dir = nd(dev);
		Uint8 r, g, b;

		switch (dir) {
		case 0:
			x -= 1;
			y -= 1;
			r = 245;
			g = 169;
			b = 184;
			break;
		case 1:
			x += 1;
			y -= 1;
			r = 91;
			g = 206;
			b = 250;
			break;
		case 2:
			x -= 1;
			y += 1;
			r = 255;
			g = 255;
			b = 255;
			break;
		case 3:
			x += 1;
			y += 1;
			r = 0;
			g = 0;
			b = 0;
			break;
		}

		if (x >= 0 && x <= 50 && y >= 0 && y <= 50) {
			SDL_SetRenderDrawColor(renderer, r, g, b, 255);
			SDL_RenderDrawPoint(renderer, x, y);
			SDL_RenderPresent(renderer);
		}

		if (x > 50 || x < 0 || y > 50 || y < 0) {
			x = 25;
			y = 25;
		}
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
