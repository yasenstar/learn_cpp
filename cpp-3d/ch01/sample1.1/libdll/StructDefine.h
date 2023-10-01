#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include <cstring>
#include <string>
using namespace std;

struct BMPstruct //����ͼƬ��Ϣ�ṹ�� show the background 
{  
	char * path;
	float x;
	float y;
	float z;
	float height;
	float width;	
};

struct PICstruct //����ͼƬ��Ϣ�ṹ�� 
{
	char * path;
	float x;
	float y;
	float z;
	float ang;
	float rx;
	float ry;
	float rz;
	float height;
	float width;
	int px;
	int py;
	int pz;	
};

struct rott//��¼��ת�Ƕ� 
{
	float ang;
	float x;
	float y;
	float z;	
};

struct sca//��¼���ű��� 
{
  float x;
  float y;
  float z; 
}; 

struct mov//��¼�ƶ�λ��
{
  int x;
  int y;
  int z;
};

struct tim
{ 
	int num;
	float ini0; 
	float ini;
	float step;
	float max;	
};

struct lop
{ 
	int num;
	float ini0; 
	float ini;
	float step;
	float max;
	float key;	
};

struct vertex//�����߶ζ˵�ṹ�� 
{
	float x1,y1,z1,x2,y2,z2;
};

struct memo //�����ͼ����ṹ�� 
{
	int id;
	vector <int> I;//�������Ͳ��� 
	vector <float> F;//���渡�������� 
	vector <string> S;//�����ַ������� 
	char C[8];//�����ַ����� 
	int fontsize;
	char *font;
};

struct stt
{
  int tt[3];	
};
