// dllCall.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <windows.h>

#include "..\lib.h"
#include "..\circle.h"

//#pragma comment(lib,"dllTest.lib")

typedef int (*lpAddFun)(int,int);
extern int __declspec(dllimport) dllGlobalVar;

//extern "C" int   __declspec(dllimport) add(int,int);
/* int  __declspec(dllimport)  __stdcall  add(int,int);
 extern int __declspec(dllimport) dllGlobalVar;*/
int main(int argc, char* argv[])
{
/*	printf("%d",add(3,3));
	printf("glVar:%d\n",dllGlobalVar);
	MyPoint p(3,6);
	circle c;
	c.setCenter(p);
	c.setRadius(10);
	printf("len:%f\n",c.getLength());
	printf("area:%f\n",c.getArea());
*/
	HINSTANCE hDll;
	hDll=LoadLibrary("..\\Debug\\dllTest.dll");
	if(hDll!=NULL){
		lpAddFun myadd=(lpAddFun)GetProcAddress(hDll,"add");
		if(myadd!=NULL){
			//printf("%d,%d\n",myadd(2,3),dllGlobalVar);
			printf("%d\n",myadd(2,3));
		}
	}else{
		printf("can't find dll!");
	}
	FreeLibrary(hDll);
	printf("Hello World!\n");
	return 0;
}

