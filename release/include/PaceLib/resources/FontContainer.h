#pragma once

#include <string>
#include <vector>
#include <filesystem>
#include "utils/sdlu.h"
#include "utils/SDL2/SDL_FontCache.h"
#include "TexContainer.h"


namespace PaceLib
{

    class FontContainer
    {
    public:
        FontContainer(std::string name);    
        ~FontContainer();

        bool Add(std::string name, std::filesystem::path file_path, int size, int r, int g, int b, int a);

        void Remove(std::string name);

        FC_Font *Get(std::string name);
        
        std::string GetName();
        void ChangeName(std::string name);

    protected:

    private:
        std::map<std::string, FC_Font *> fnm;
        std::string name;

    };
    
}
