#include "Car.h"



void Car::Draw()
{
	// Draw To Screen
}

void Car::Move(Vector3<float> NewPosition)
{
	Position = NewPosition;
}


Car::Car()
{
	Position = Vector3<float>(0.0f, 0.0f, 0.0f);
}

Car::~Car()
{

}

