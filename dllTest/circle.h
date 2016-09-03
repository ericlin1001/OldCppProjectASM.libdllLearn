#ifndef CIRCLE_H
#define CIRCLE_H
#include "lib.h"

#ifdef DLL_FILE
#define DLLDECL __declspec(dllexport)
#else
#define DLLDECL __declspec(dllimport)
#endif

class DLLDECL circle
{
public:
	circle();
	void setCenter(const MyPoint p);
	void setRadius(float r);
	float getLength();
	float getArea();
private:
	float radius;
	MyPoint center;
};
#endif