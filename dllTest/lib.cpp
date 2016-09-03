#include "stdafx.h"
#include "lib.h"
#include <stdio.h>
int __stdcall add(int x,int y){
	printf("add(%d,%d);\n",x,y);
	return x+y;
}

MyPoint::MyPoint(){
	assign(0,0);
}
MyPoint::MyPoint(float x,float y){
	assign(x,y);
}
void MyPoint::assign(float xx,float yy){
	x=xx;
	y=yy;
}
