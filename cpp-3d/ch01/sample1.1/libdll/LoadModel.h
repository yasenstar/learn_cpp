#pragma once
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#include <string> 
#include <string.h>
using namespace std; 
void DrawStlModel();
class DLLIMPORT LoadModel
{
  public:
	int num;//个数
	float m_trans[3];//平移
	float m_rorate[3];//旋转
	float *verts;//存储点坐标
	float *vnorms;//法线坐标
	LoadModel();
	void LoadStlModel(char *stlfile,float x,float y,float z,float rx,float ry,float rz,float scale);
    void LoadTxtModel(string file,int sty); 
    void LoadLink(char* web);
};
