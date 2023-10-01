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
	void LookAt(int a,int b,int c,int d,int e,int f); //���ɹ�	
	void Name(char* str);//���ô�������  
	char* GetName();//��ȡ�������� 	
	void Size(int x,int y);  //���ô����С
	void Place(int x,int y);//���ô�����ʾλ�� 
	int GetPlaceX();//��ȡ������ʾλ��X���� 
	int GetPlaceY();//��ȡ������ʾλ��Y���� 
	int GetWidth();//��ȡ������ 
	int GetHeigh();//��ȡ����߶� 
	void Chessboard(int val,int width);
	void BackColor(int r,int g,int b);
	void BackColor(string c);
	void BackColor(int val);
	void Background( char *path);
	int GetBackColorR();
	int GetBackColorG();
	int GetBackColorB();    
	void Set3D(int opt);//����3D��ͼ 
	int Get3D();//��ȡ3D��ͼ״̬
	void Show();//��ͼ 
	void FullScreen();
	void ShowXYZ();//��ʾ��ά������
	void ShowXY(int size); 
	void ShowXY();
	void Show3DXYZ(int size);
	void Light();//�ظ��ˣ����ù� 
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
	int size_x;//��� 
	int size_y;//�߶� 
	char *str; //�������� 
	static char setting_size;
	static char setting_color;
	static char setting_title;	
};

