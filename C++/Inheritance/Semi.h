#ifndef _SEMI_H_
#define _SEMI_H_

#include "Car.h"
#include "SemiTrailer.h"

class Semi : public Car
{
private:
	SemiTrailer Trailer;

public:
	void Move(Vector3<float> NewPosition);

	Semi();
	~Semi();
};

#endif // !_SEMI_H_
