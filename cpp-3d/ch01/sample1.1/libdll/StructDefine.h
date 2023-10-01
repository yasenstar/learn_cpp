#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 
#include <cstring>
#include <string>
using namespace std;

struct BMPstruct //保存图片信息结构体 show the background 
{  
	char * path;
	float x;
	float y;
	float z;
	float height;
	float width;	
};

struct PICstruct //保存图片信息结构体 
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

struct rott//记录旋转角度 
{
	float ang;
	float x;
	float y;
	float z;	
};

struct sca//记录缩放比例 
{
  float x;
  float y;
  float z; 
}; 

struct mov//记录移动位置
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

struct vertex//保存线段端点结构体 
{
	float x1,y1,z1,x2,y2,z2;
};

struct memo //保存绘图命令结构体 
{
	int id;
	vector <int> I;//保存整型参数 
	vector <float> F;//保存浮点数参数 
	vector <string> S;//保存字符串参数 
	char C[8];//保存字符参数 
	int fontsize;
	char *font;
};

struct stt
{
  int tt[3];	
};
