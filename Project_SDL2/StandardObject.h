#ifndef _STANDARD_OBJECT_
#define _STANDARD_OBJECT_

#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

class Object {
    SDL_Texture* texture;
    SDL_Rect rect;
public:
    Object();
    ~Object();

    SDL_Rect getRect() const {return rect;}
    SDL_Texture* getTexture() const {return texture;}
    void setRect(const int&, const int&, const int&, const int&);
    void setRect(const SDL_Rect&);
    void setTexture(SDL_Renderer*, SDL_Surface*, const char*);
    void setTexture(SDL_Texture*);
    //void copyTexture(const Object Other);
    void presentPNG(SDL_Renderer*, const SDL_Rect&);
    void Render(SDL_Renderer*, const SDL_Rect*);
};


#endif
