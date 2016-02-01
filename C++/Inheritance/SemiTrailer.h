#ifndef _SEMITRAILER_H_
#define _SEMITRAILER_H_

#include "Vector.h"

class SemiTrailer
{
private:
	Vector3<float> Position;

public:
	void SetPosition(Vector3<float> NewPosition);

	SemiTrailer();
	~SemiTrailer();
};

#endif // !_SEMITRAILER_H_