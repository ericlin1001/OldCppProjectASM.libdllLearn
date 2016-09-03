#include "stdafx.h"
#include "circle.h"

#define PI 3.1415926
circle::circle(){
}
void circle::setCenter(const MyPoint p){
	center=p;
}
void circle::setRadius(float r){
	this->radius=r;
}
float circle::getLength(){
	return radius*PI*2;
}
float circle::getArea(){
	return PI*radius*radius;
}
