#pragma once
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#include <windows.h>
#include <gl/gl.h>
#include <GL/glut.h>
#include <gl/glu.h>
#include <string.h> 
#include <cstring>
#include <string> 
#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <GLWindow.h>

using namespace std;
void windowBackground(char* path);
void windowName(char *str);
void windowChessboard(int val,int width);
void windowBackColor(string c);
void windowBackColor1(int val);
void windowBackColor3(int r,int g,int b);
void windowSet3D(int opt);
void windowFullScreen();
void windowShowXYZ();
void windowShowXY();
void windowShowXY1(int size);
void windowRun(int y,int x);
void windowFrog(int v) ;
void windowWait(int time);
void windowInfo(int val);
void windowMessage(string c);
void windowCout(string str);

class DLLIMPORT window
{
  public:
	void LookAt(int a,int b,int c,int d,int e,int f); //不成功	
	void Name(char* str);//设置窗体名称  
	char* GetName();//获取窗体名称 	
	void Size(int x,int y);  //设置窗体大小
	void Place(int x,int y);//设置窗体显示位置 
	int GetPlaceX();//获取窗口显示位置X坐标 
	int GetPlaceY();//获取窗口显示位置Y坐标 
	int GetWidth();//获取窗体宽度 
	int GetHeigh();//获取窗体高度 
	void Chessboard(int val,int width);
	void BackColor(int r,int g,int b);
	void BackColor(string c);
	void BackColor(int val);
	void Background( char *path);
	int GetBackColorR();
	int GetBackColorG();
	int GetBackColorB();    
	void Set3D(int opt);//设置3D视图 
	int Get3D();//获取3D视图状态
	void Show();//画图 
	void FullScreen();
	void ShowXYZ();//显示三维坐标轴
	void ShowXY(int size); 
	void ShowXY();
	void Show3DXYZ(int size);
	void Light();//重复了，不用管 
	void Run(int y,int x);
	void Frog(int v);
	void FrogDesity(int v);
	void Wait(int time);
	void Info(int val);
	void Message(char *c);
    void Message(string c);	
    void Cout(string);	
    void Cout(int n);
    void Cout(double n);
    void Cout(char *c);
	void Color(int r,int g,int b); 
	int GetMouseX();
	int GetMouseY();
	char GetKey();	
	void Clean();	
  private:
	int r,g,b;
	int size_x;//宽度 
	int size_y;//高度 
	char *str; //窗体名称 
	static char setting_size;
	static char setting_color;
	static char setting_title;	
};

