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
void ID_32_sphere(int i);//����������
void ID_33_sphere(int i);//��ɫ������
void ID_34_Elliptic(int i);//��ɫ��Բ����
void ID_36_triangle(int i);//��������������
void ID_37_triangle(int i);//ƽ������������
void ID_38_Pentagram(int i);//�����1
void ID_39_Pentagram(int i);//���������2
void ID_40_Pentagram(int i);//ʵ�������2
void ID_43_Pentagon(int i);//2D�����
void ID_49_elli(int i);//ʵ����Բ
void ID_54_poly(int i);//���Ķ����
void ID_55_poly(int i);//ʵ�Ķ����
void ID_66_Pyramid(int i);//��ɫ������
void ID_67_Cuboid(int i);//��ɫ������
void ID_83_Cylinder(int i);//��Բ��
void ID_84_cup(int i);//��Բ��
void ID_87_partdisc(int i);//�沿��Բ��
void ID_88_colorcylon(int i);//��ɫԲ����
void ID_89_colorcup(int i);//��ɫԲ��
void ID_90_magiccone(int i);//��ɫԲ��
void ID_91_colorcylon(int i);//��ɫԲ����
void ID_92_colorcup(int i);//��ɫ����
void ID_93_cone(int i);//��ɫԲ��
void ID_94_txtmap(int i);//�������ͼ
void ID_100_xloop(int i);//XLOOP����
void ID_101_yloop(int i);//YLOOP����
void ID_102_zloop(int i);//ZLOOP����
void ID_107_Pentagram(int i);//3Dʵ�������2
void ID_110_backcolor(int i);//���ñ���ɫ
void ID_114_ColortriangleS(int i);//��ɫ����������
void ID_115_triangle(int i);//���������
void ID_116_elli(int i);
void ID_120_Pyramid(int i); //������
void ID_121_Cube(int i);//������
void ID_122_Arc(int i);//��
void ID_123_Arc(int i);//�ñʻ���
void ID_125_Pyramid(int i);//��׶
void ID_127_Cut(int i);
void ID_129_Fan(int i);//ʵ������
void ID_130_Polygon2(int i);//ʵ���������
void ID_131_Polygon4(int i);//ʵ������
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
void modelColorCuboid(int x,int y,int z);//��ɫ������
void modelCuboid(int x,int y,int z);//��ͨ������
void modelColorSphere(int r,int x,int y);//��ɫ����
void modelMagicSphere(int r,int x,int y);
void modelColorElliptic(int x,int y,int l,int w);//��ɫ��Բ
void modelMagicElliptic(int x,int y,int l,int w);//��ɫ��Բ
void modelCylinder(int r1,int r2,int h);//Բ����
void modelMagicCylinder(int r1,int r2,int h);//��ɫԲ����
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
    void Material(int v);//��������
    void Material();//�������ùر�
    void Rotate();
    void Rotate(float ang);
    void Rotate(float ang,float x,float y,float z);//��ת����
    void Teapot(float size,int sty);//���
    void Arc(int r,int ang1,int ang2,int width);//122 �� �뾶����ĳ���ǵ�ĳ���ǣ��߿�
    void Pentagram1(int v);//���������
    void Pentagram2(int v); //����ƽ�������
    void Pentagram3(int v) ;//ʵ��ƽ�������
    void Pentagram3D(int v,int h);//��������ID_107
    void Rectangle1(int x,int y);//���ĳ�����  ID_51
    void Rectangle2(int x,int y);//ʵ�ĳ����� ID_50
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3);//ƽ�������� ID_24
    void Trangle(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3);//���������� ID_24
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3,int c[3][3]);//ƽ���ɫ������ ID_25
    void Trangle(int x1,int y1,int z1,int x2,int y2,int z2,int x3,int y3,int z3,int c[3][3]);//�����ɫ������ID_25
    void Trangle(int x1,int y1,int x2,int y2,int x3,int y3,int h);//��������� ID_115
    void TrangleS(int num,int N[][2]);//���������� ID_35 glwindow.cpp
    void TrangleS(int num,int N[][2],int c[][3]);//����ƽ���ɫ������ ID_37
    void TrangleS(int num,int N[][3]);//�������������� ID_36
    void TrangleS(int num,int N[][3],int c[][3]);//�������������� ID_114
    void Circle1(int v);//����Բ ID_46
    void Circle2(int v);//ʵ��Բ ID_47
    void Elliptic1(int x,int y);//������Բ ID_48
    void Elliptic2(int x,int y);//ʵ����Բ ID_49
    void Elliptic(int x,int y,int h);//����Բ ID_116
    void Pentagon(int v);//ƽ��ʵ������� ID_43
    void Polygon1(int n,int v); //������� ID_45
    void Polygon2(int n,int v); //������� ID_44
    void Polygon3(int n,int arr[][2]);//����� ID_54
    void Polygon4(int n,int arr[][2]);//����� 	ID_55
    void Fan(int R,int angle);//����  ID_53
    void Fan1(int R,int angle);//���� ID_52 ûʵ��
    void Fan(int R,int angle,int h);//��������
    void SuperStar(int v,int num);//����״����,vΪ�뾶��numΪ�ߵ����� ID_32
    void SuperSphere(int v,int num);//������������� ID_33
    void SuperElliptic(int x,int y,int num);//��˸���� ID_34
    void Cube(float size,int sty);//��������Ľ��պ��� ID_14
    void Sphere(float radio,int slice,int sty); //ID_20
    void Cone(float radio,float h,int slice,int sty);//Բ׵�� ID_21
    void Torus(float in,float out,int slice,int sty);//Բ���� ID_22
    void Cube4(int v,int sty);//4����  ID_118
    void Cube8(int v,int sty);//������  ID_15
    void Cube16(int v,int sty);//16����  ID_117
    void Cube20(int v,int sty);//20����  ID_119
    void ColorPyramid(int lenth,int height);//��ɫ������ ID_66
    void Pyramid(int lenth,int height);//������ ID_120
    void ColorCuboid(int x,int y,int z);//��ɫ������ ID_67
    void Cuboid(int x,int y,int z);//������ ID_121
    void ColorSphere(int r,int x,int y);//��ɫ���� ID_68
    void MagicSphere(int r,int x,int y);//��ɫ���� ID_69
    void ColorElliptic(int x,int y,int l,int w);//��ɫ��Բ ID_81
    void MagicElliptic(int x,int y,int l,int w);//��ɫ��Բ	ID_82
    void Cylinder(int r1,int r2,int h);//Բ���� ID_83
    void MagicCylinder(int r1,int r2,int h);//��ɫԲ���� ID_88
    void MagicCup(int r1,int r2,int h);//��ɫ��  ID_89
    void MagicCircular(int r1,int r2,int h) ;//��ɫԲ�� ID_90
    void ColorCylinder(int r1,int r2,int h);//��ɫԲ���� ID_91
    void ColorCup(int r1,int r2,int h);//��ɫ���� ID_92
    void ColorCircular(int r1,int r2,int h);//��ɫԲ�� ID_93
    void Cup(int r1,int r2,int h);//Բ�� ID_84
    void Circular(int r1,int r2,int h) ;//Բ�� ID_85
    void Disc(int r1,int r2,int stick);//Բ�� ID_86
    void PartDisc(int p1,int p2,int r1,int r2,int stick);//����Բ�� ID_87
    void Texture ( char *path,float x,float y,float z,float ang,float rx,float ry,float rz,float width,float height);
    void Pyramid(int l,int n,int h);//��׶
    void HalfSphere(int r,int cut);	//����
    void Cut(string cut,int where);//�и�
    void Cut();
    void Polygon2(int n,int r,int h);//�����������
    void Polygon4(int n,int arr[][2],int h);//�������� 	ID_
    void Heart(int v,int h);//����
};


