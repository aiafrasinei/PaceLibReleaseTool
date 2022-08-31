#pragma once

#include <string>
#include <vector>
#include "Place.h"
#include "utils/sdlu.h"

namespace PaceLib
{

    class Map
    {
    public:
        Map(std::string name, SDL_Window* window, SDL_Renderer* renderer);    
        ~Map();
        
        void SetName(std::string name);

        void Loop(SDL_Event *event);

    protected:

    private:
        std::vector<PaceLib::Place> *places;

        SDL_Window* window;
        SDL_Renderer* renderer;

        std::string name;

    };
    
}
