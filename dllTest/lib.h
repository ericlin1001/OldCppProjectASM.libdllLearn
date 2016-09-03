#ifndef LIB_H
#define LIB_H
#ifdef DLL_FILE
#define DLLDECL __declspec(dllexport)
#else
#define DLLDECL __declspec(dllimport)
#endif

int DLLDECL _stdcall add(int x,int y);
extern int DLLDECL dllGlobalVar;
class DLLDECL MyPoint
{
private:
	float x,y;
public:
	MyPoint();
	MyPoint(float,float);
	inline void assign(float,float);
};
#endif
