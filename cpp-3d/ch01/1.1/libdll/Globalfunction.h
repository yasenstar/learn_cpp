#pragma once
#include "GlobalParameter.h"
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT int Random(int t);//�����
DLLIMPORT string inttostr(int value);//����ת�ַ��� 
DLLIMPORT string ftostr(float value);//������ת�ַ���
DLLIMPORT string ftostr(float value,int ndig);
DLLIMPORT string chartostring(char c);

void mymenu(int value); 
void SpecialKeys(int key, int x, int y); 
void myMouse(int button,int state,int x,int y) ;
void SetupRC();//�����������õĺ���
void myIdle(void);//���лص����� 

void _word(const char* str);//������� 
void drawstreing(char* str,float x,float y,float z,float tx,float ty,float tz,int a,float depth);
void Show3DText(char *str);
unsigned char *LoadBMP(const char *path,int &width,int &height);//����ͼƬ 
bool LoadGLTextures1(char *filename,GLuint &texture);	//����λͼ�ļ� ����1
void LoadTextMap(char *path,float x,float y,float z,float width,float height) ;//����ͼ
void LoadTextTure(int N,char *path,float x,float y,float z,float ang,float rx,float ry,float rz,float width,float height) ;
void selectFont(int size, int charset, const char* face) ; 
