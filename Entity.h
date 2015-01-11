
/**----------------------------------------------------------------------
// @Class: Entity
//
// @Autor: LE BAS DE BOUCLANS Olivier
// @Date: 19/10/13
//
// @Description: Description for base entity of the game
//----------------------------------------------------------------------**/

#ifndef ENTITY_H
#define ENTITY_H

#include "allegro.h"
#include "Macros.h"

class Map;

struct Rect
{
	int x1;
	int y1;

	int x2;
	int y2;
};

class Entity
{
    public:
        //Constructor
		Entity(int X=DEFAULT_X, int Y=DEFAULT_Y);
        //Destructor
        ~Entity() {}

        //Render the entity on the target
        virtual void draw(BITMAP* target) const=0;
		virtual Rect boundingRect() const=0;

		//public attribute
        int x; //x coordinate
		int y; //x coordinate
        int color;  //color
		int radius; //collision radius
		int hp;

		Map* pMap;
};

#endif // ENTITY_H
