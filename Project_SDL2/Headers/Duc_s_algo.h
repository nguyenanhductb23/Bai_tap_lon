bool isIn(const SDL_Point, SDL_Rect);

void playerHitAnEntity(SDL_Window*, SDL_Renderer*, const SDL_Rect, SDL_Rect&, const SDL_Rect*, const int);

bool hitTheWall(const SDL_Rect, const SDL_Rect*, const int, const SDL_Rect*, const int);
