#ifndef _CAR_H_
#define _CAR_H_

#include "Vector.h"

#include "Driver.h"
#include "Passenger.h"

#include <vector>

class Car
{
protected:
	int Wheels;

	Vector3<float> Position;
	Vector4<float> Color;

	Driver Driver;
	std::vector<Passenger> Passengers;

public:
	virtual void Draw();
	virtual void Move(Vector3<float> NewPosition);

	Car();
	virtual ~Car();
};

#endif // !_CAR_H_

