#include "MANAGE_Window.h"
#include "MANAGE_Core.h"
#include <SDL.h>
#include <iostream>

MANAGE_Window* MANAGE_Window::window_instance = nullptr;

void MANAGE_Window::WindowInit(std::string win_str, int win_W, int win_H)
{
    SDL_Window* window = SDL_CreateWindow(
        "dmd dksldi",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800,
        600,
}