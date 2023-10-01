#pragma once
#include "GlobalParameter.h"
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT int Random(int t);//随机数
DLLIMPORT string inttostr(int value);//整数转字符串 
DLLIMPORT string ftostr(float value);//浮点数转字符串
DLLIMPORT string ftostr(float value,int ndig);
DLLIMPORT string chartostring(char c);

void mymenu(int value); 
void SpecialKeys(int key, int x, int y); 
void myMouse(int button,int state,int x,int y) ;
void SetupRC();//对纹理做设置的函数
void myIdle(void);//空闲回调函数 

void _word(const char* str);//输出文字 
void drawstreing(char* str,float x,float y,float z,float tx,float ty,float tz,int a,float depth);
void Show3DText(char *str);
unsigned char *LoadBMP(const char *path,int &width,int &height);//调用图片 
bool LoadGLTextures1(char *filename,GLuint &texture);	//加载位图文件 方法1
void LoadTextMap(char *path,float x,float y,float z,float width,float height) ;//加载图
void LoadTextTure(int N,char *path,float x,float y,float z,float ang,float rx,float ry,float rz,float width,float height) ;
void selectFont(int size, int charset, const char* face) ; 
