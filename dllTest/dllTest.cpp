// dllTest.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "windows.h"
#include "stdio.h"
#include "lib.h"
int dllGlobalVar;
BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch(ul_reason_for_call){
	case DLL_PROCESS_ATTACH:
		printf("\n DLL_PROCESS_ATTACH");
		dllGlobalVar=100;
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		printf("\n DLL_PROCESS_DETACH");
		break;
	}

    return TRUE;
}

