#include "Semi.h"



void Semi::Move(Vector3<float> NewPosition)
{
	Car::Move(NewPosition);

	Trailer.SetPosition(Position);
}

Semi::Semi() : Car()
{

}
Semi::~Semi()
{

}
