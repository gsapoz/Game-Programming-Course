#ifndef ENTITY_H
#define ENTITY_H

#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>

namespace Entity
{
	class Entity { //put in header (entity.h, entity.cpp)
	public:
		void Draw();
		void SetSize(float height, float width);
    
		float x;
		float y;
		float angle;
    
		int textureID;
    
		float width;
		float height;
		float speed;
    
		float dir_x;
		float dir_y;
	};
}
#endif