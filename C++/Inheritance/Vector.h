#ifndef _VECTOR_H_
#define _VECTOR_H_

template<typename T>
class Vector2
{
protected:
	T x, y;
public:
	Vector2();
	Vector2(T x, T y);

	virtual ~Vector2();
};

template<typename T>
Vector2<T>::Vector2()
{

}
template<typename T>
Vector2<T>::Vector2(T x, T y)
{
	this->x = x;
	this->y = y;
}

template<typename T>
Vector2<T>::~Vector2()
{

}

//////////////////////////////////////////////
//	End of Vector2
//////////////////////////////////////////////

template<typename T>
class Vector3 : Vector2<T>
{
private:
	T z;
public:
	Vector3();
	Vector3(T x, T y, T z);

	~Vector3();	
};

template<typename T>
Vector3<T>::Vector3()
{

}
template<typename T>
Vector3<T>::Vector3(T x, T y, T z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

template<typename T>
Vector3<T>::~Vector3()
{

}

//////////////////////////////////////////////
//	End of Vector3
//////////////////////////////////////////////

template<typename T>
class Vector4 : Vector3<T>
{
private:
	T z;
public:
	Vector4();
	Vector4(T x, T y, T z, T t);

	~Vector4();
};

template<typename T>
Vector4<T>::Vector4()
{

}
template<typename T>
Vector4<T>::Vector4(T x, T y, T z, T t)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->t = t;
}

template<typename T>
Vector4<T>::~Vector4()
{

}

#endif // !_VECTOR_H_