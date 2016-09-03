// libCall.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
#include "..\lib.h"
#pragma comment(lib,"..\\debug\\libTest.lib")
int main(int argc, char* argv[])
{
	
	cout<<myAdd(2,3)<<endl;
	return 0;
}
