// RenderSystem.cpp
// 
// Xu Junjie, Kevin
// University of Oregon
// 2014-05-01
#include <cstdlib>
#include <ctime>
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "RenderSystem.h"

namespace gws {
	RenderSystem::RenderSystem(World& world, SDL_Window* window, SDL_Renderer* renderer, SDL_Texture* texture) : 
	world(world),
	window(window),
	renderer(renderer),
	texture(texture) {
		// Most of the code below should be moved into functions
		// KX: Actually I think most of these initialization stuff should be done in
		// the main game loop in worldsim.cpp, then this system focuses solely on 
		// updating the pixel map
		SDL_QueryTexture(texture, NULL, NULL, &width, &height);
	  pixels = new Uint32[width * height];
	  memset(pixels, 255, width * height * sizeof(Uint32));
	}
	RenderSystem::~RenderSystem() {}
	void RenderSystem::update() {
		for (auto render : renders) { // only render "visible" entities
			int ID = render->ID;
		}
		for (size_t i = 0; i < width; ++i) {
			for (size_t j = 0; j < height; ++j) {
				pixels[j * width + i] = rand() % 294967295;
			}
		}
		SDL_UpdateTexture(texture, NULL, pixels, width * sizeof(Uint32));			
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
	}
	string RenderSystem::getName() {
		return "RenderSystem";
	}
} /* gws */