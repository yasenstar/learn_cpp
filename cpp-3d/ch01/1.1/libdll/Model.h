#pragma  once
#include "GlobalParameter.h"
#include "Globalfunction.h"
#include "show.h"
#define PI 3.14159f
#include <gl/gl.h>
#include "GL/glut.h"
#include "GLAUX.H"
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

void drawSphere1(GLfloat xx, GLfloat yy, GLfloat zz, GLfloat radius, GLfloat M, GLfloat N);
void drawSphere(GLfloat xx, GLfloat yy, GLfloat zz, GLfloat radius, GLfloat M, GLfloat N);
void drawELSphere1(GLfloat xx, GLfloat yy, GLfloat zz, GLfloat radius, GLfloat ry,GLfloat M, GLfloat N);
void drawELSphere2(GLfloat xx, GLfloat yy, GLfloat zz, GLfloat radius, GLfloat ry,GLfloat M, GLfloat N);
void M_teapot(int i);
void IniRotate();
void home();
void ID_32_sphere(int i);//放射线球体
void ID_33_sphere(int i);//彩色线球体
void ID_34_Elliptic(int i);//变色椭圆球体
void ID_36_triangle(int i);//立体连续三角形
void ID_37_triangle(int i);//平面连续三角形
void ID_38_Pentagram(int i);//五角星1
void ID_39_Pentagram(int i);//空心五角星2
void ID_40_Pentagram(int i);//实心五角星2
void ID_43_Pentagon(int i);//2D五边形
void ID_49_elli(int i);//实心椭圆
void ID_54_poly(int i);//空心多边形
void ID_55_poly(int i);//实心多边形
void ID_66_Pyramid(int i);//彩色金字塔
void ID_67_Cuboid(int i);//彩色长方体
void ID_83_Cylinder(int i);//绘圆柱
void ID_84_cup(int i);//绘圆杯
void ID_87_partdisc(int i);//绘部分圆盘
void ID_88_colorcylon(int i);//变色圆柱体
void ID_89_colorcup(int i);//变色圆杯
void ID_90_magiccone(int i);//变色圆管
void ID_91_colorcylon(int i);//彩色圆柱体
void ID_92_colorcup(int i);//彩色杯子
void ID_93_cone(int i);//彩色圆管
void ID_94_txtmap(int i);//输出地形图
void ID_100_xloop(int i);//XLOOP动画
void ID_101_yloop(int i);//YLOOP动画
void ID_102_zloop(int i);//ZLOOP动画
void ID_107_Pentagram(int i);//3D实心五角星2
void ID_110_backcolor(int i);//设置背景色
void ID_114_ColortriangleS(int i);//彩色立体三角形
void ID_115_triangle(int i);//厚度三角形
void ID_116_elli(int i);
void ID_120_Pyramid(int i); //金字塔
void ID_121_Cube(int i);//长方体
void ID_122_Arc(int i);//弧
void ID_123_Arc(int i);//用笔画弧
void ID_125_Pyramid(int i);//棱锥
void ID_127_Cut(int i);
void ID_129_Fan(int i);//实体扇形
void ID_130_Polygon2(int i);//实体正多边形
void ID_131_Polygon4(int i);//实体多边形
void ID_132_Heart(int i);
void modelTeapot(float size,int sty);
void modelMaterial1(int v);
void modelMaterial0();
void modelRotate0();
void modelRotate4(float ang,float x,float y,float z);
void modelRotate1(float ang);
void modelArc(int r,int ang1,int ang2,int width);
void modelPentagram1(int v);
void modelPentagram2(int v);
void modelPentagram3(int v);
void modelPentagram3D(int v,int h);
void modelRectangle1(int x,int y);
void modelRectangle2(int x,int y);
void modelTrangle6(int x1,int y1,int x2,int y2,int x3,int y3);
void modelTrangle7(int x1,int y1,int x2,int y2,int x3,int y3,int h);
void modelTrangle9(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3);
void modelCircle1(int v);
void modelCircle2(int v);
void modelElliptic1(int x,int y);
void modelElliptic2(int x,int y);
void modelElliptic(int x,int y,int h);
void modelPentagon(int v);
void modelPolygon1(int n,int v);
void modelPolygon2(int n,int v);
void modelFan3(int R,int angle,int h);
void modelFan2(int R,int angle);
void modelSuperStar(int v,int num);
void modelSuperSphere(int v,int num);
void modelSuperElliptic(int x,int y,int num);
void modelCube(float size,int sty);
void modelCone(float radio,float h,int slice,int sty);
void modelSphere(float radio,int slice,int sty);
void modelTorus(float in,float out,int slice,int sty);
void modelCube4(int v,int sty);
void modelCube8(int v,int sty);
void modelCube16(int v,int sty);
void modelCube20(int v,int sty);
void modelColorPyramid(int lenth,int height);
void modelPyramid2(int lenth,int height);
void modelPyramid3(int l,int n,int h);
void modelColorCuboid(int x,int y,int z);//彩色长方体
void modelCuboid(int x,int y,int z);//普通长方体
void modelColorSphere(int r,int x,int y);//彩色球体
void modelMagicSphere(int r,int x,int y);
void modelColorElliptic(int x,int y,int l,int w);//彩色椭圆
void modelMagicElliptic(int x,int y,int l,int w);//彩色椭圆
void modelCylinder(int r1,int r2,int h);//圆柱体
void modelMagicCylinder(int r1,int r2,int h);//变色圆柱体
void modelMagicCup(int r1,int r2,int h);
void modelMagicCircular(int r1,int r2,int h);
void modelColorCircular(int r1,int r2,int h);
void modelColorCup(int r1,int r2,int h);
void modelColorCylinder(int r1,int r2,int h);
void modelCup(int r1,int r2,int h);
void modelCircular(int r1,int r2,int h) ;
void modelDisc(int r1,int r2,int stick);
void modelPartDisc(int p1,int p2,int r1,int r2,int stick);
void modelTexture (char *path,float x,float y,float z,float ang,float rx,float ry,float rz,float width,float height);
void modelHalfSphere(int r,int cut);
void modelCut0();
void modelCut2(string cut,int where);
void modelHeart(int v,int h);
class DLLIMPORT model
{
  public:
    void Material(int v);//材质设置
    void Material();//材质设置关闭
    void Rotate();
    void Rotate(float ang);
    void Rotate(float ang,float x,float y,float z);//旋转物体
    void Teapot(float size,int sty);//茶壶
    void Arc(int r,int ang1,int ang2,int width);//122 弧 半径，从某个角到某个角，线宽
    void Pentagram1(int v);//线条五角星
    void Pentagram2(int v); //空心平面五角星
    void Pentagram3(int v) ;//实体平面五角星
    void Pentagram3D(int v,int h);//厚度五角星ID_107
    void Rectangle1(int x,int y);//空心长方形  ID_51
    void Rectangle2(int x,int y);//实心长方形 ID_50
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3);//平面三角形 ID_24
    void Trangle(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3);//立体三角形 ID_24
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3,int c[3][3]);//平面彩色三角形 ID_25
    void Trangle(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3,int c[3][3]);//立体彩色三角形ID_25
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3,int h);//厚度三角形 ID_115
    void TrangleS(int num,int N[][2]);//连续三角形 ID_35 glwindow.cpp
    void TrangleS(int num,int N[][2],int c[][3]);//连续平面彩色三角形 ID_37
    void TrangleS(int num,int N[][3]);//立体连续三角形 ID_36
    void TrangleS(int num,int N[][3],int c[][3]);//立体连续三角形 ID_114
    void Circle1(int v);//空心圆 ID_46
    void Circle2(int v);//实心圆 ID_47
    void Elliptic1(int x,int y);//空心椭圆 ID_48
    void Elliptic2(int x,int y);//实心椭圆 ID_49
    void Elliptic(int x,int y,int h);//厚椭圆 ID_116
    void Pentagon(int v);//平面实体五边形 ID_43
    void Polygon1(int n,int v); //正多边形 ID_45
    void Polygon2(int n,int v); //正多边形 ID_44
    void Polygon3(int n,int arr[][2]);//多边形 ID_54
    void Polygon4(int n,int arr[][2]);//多边形 	ID_55
    void Fan(int R,int angle);//扇形  ID_53
    void Fan1(int R,int angle);//扇形 ID_52 没实现
    void Fan(int R,int angle,int h);//立体扇形
    void SuperStar(int v,int num);//放射状球体,v为半径，num为线的数量 ID_32
    void SuperSphere(int v,int num);//特殊的线条球体 ID_33
    void SuperElliptic(int x,int y,int num);//闪烁椭球 ID_34
    void Cube(float size,int sty);//画立体体的接收函数 ID_14
    void Sphere(float radio,int slice,int sty); //ID_20
    void Cone(float radio,float h,int slice,int sty);//圆椎体 ID_21
    void Torus(float in,float out,int slice,int sty);//圆环体 ID_22
    void Cube4(int v,int sty);//4面体  ID_118
    void Cube8(int v,int sty);//八面体  ID_15
    void Cube16(int v,int sty);//16面体  ID_117
    void Cube20(int v,int sty);//20面体  ID_119
    void ColorPyramid(int lenth,int height);//彩色金字塔 ID_66
    void Pyramid(int lenth,int height);//金字塔 ID_120
    void ColorCuboid(int x,int y,int z);//彩色长方体 ID_67
    void Cuboid(int x,int y,int z);//长方体 ID_121
    void ColorSphere(int r,int x,int y);//彩色球体 ID_68
    void MagicSphere(int r,int x,int y);//变色球体 ID_69
    void ColorElliptic(int x,int y,int l,int w);//彩色椭圆 ID_81
    void MagicElliptic(int x,int y,int l,int w);//变色椭圆	ID_82
    void Cylinder(int r1,int r2,int h);//圆柱体 ID_83
    void MagicCylinder(int r1,int r2,int h);//变色圆柱体 ID_88
    void MagicCup(int r1,int r2,int h);//变色杯  ID_89
    void MagicCircular(int r1,int r2,int h) ;//变色圆管 ID_90
    void ColorCylinder(int r1,int r2,int h);//彩色圆柱体 ID_91
    void ColorCup(int r1,int r2,int h);//彩色杯子 ID_92
    void ColorCircular(int r1,int r2,int h);//彩色圆管 ID_93
    void Cup(int r1,int r2,int h);//圆杯 ID_84
    void Circular(int r1,int r2,int h) ;//圆管 ID_85
    void Disc(int r1,int r2,int stick);//圆盘 ID_86
    void PartDisc(int p1,int p2,int r1,int r2,int stick);//部分圆盘 ID_87
    void Texture ( char *path,float x,float y,float z,float ang,float rx,float ry,float rz,float width,float height);
    void Pyramid(int l,int n,int h);//棱锥
    void HalfSphere(int r,int cut);	//半球
    void Cut(string cut,int where);//切割
    void Cut();
    void Polygon2(int n,int r,int h);//立体正多边形
    void Polygon4(int n,int arr[][2],int h);//立体多边形 	ID_
    void Heart(int v,int h);//心形
};


