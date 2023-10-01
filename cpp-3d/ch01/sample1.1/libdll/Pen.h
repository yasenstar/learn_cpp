#pragma  once
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#include <cstring>
#include <string>
#include <string.h>
using namespace std;

DLLIMPORT void ShowYear(int x,int y);
DLLIMPORT void ShowMonth(int x,int y);
DLLIMPORT void ShowDay(int x,int y);
DLLIMPORT void ShowHour(int x,int y);
DLLIMPORT void ShowSecond(int x,int y);
DLLIMPORT void ShowMinute(int x,int y);
DLLIMPORT void PenGo(int val);
DLLIMPORT void CartoonRotate(float ini,int x,int y,int z,float step,float Max);
DLLIMPORT void CartoonRotate(void);
DLLIMPORT void CartoonRunX(float ini,float Max);
DLLIMPORT void CartoonRunY(float ini,float Max);
DLLIMPORT void CartoonRunZ(float ini,float Max);
DLLIMPORT void CartoonLoopX(float ini,float Max);
DLLIMPORT void CartoonLoopY(float ini,float Max);
DLLIMPORT void CartoonLoopZ(float ini,float Max);
DLLIMPORT void CartoonLoop();
DLLIMPORT void CartoonRun();
DLLIMPORT void CartoonCircleXY(int r,float ini,float Max);
DLLIMPORT void CartoonCircleXZ(int r,float ini,float Max);
DLLIMPORT void CartoonCircleYZ(int r,float ini,float Max);
DLLIMPORT void CartoonEnd();
DLLIMPORT void CartoonScaleX(float ini,float Max);//不成功
DLLIMPORT void OpenAlone();//入栈
DLLIMPORT void CloseAlone();//出栈
DLLIMPORT void Scale(float x,float y,float z);//缩放
DLLIMPORT void Scale();//缩放恢复正常
DLLIMPORT void CloseLight();
DLLIMPORT void OpenLight();
DLLIMPORT void Flash();//闪烁
DLLIMPORT void NeonLight();//颜色变化

DLLIMPORT void DrawLine();
DLLIMPORT void DrawEnd();
DLLIMPORT void Vertex(int x,int y);
DLLIMPORT void Vertex(int x,int y,int z);
DLLIMPORT void DrawCloseLine();//绘制闭合直线
DLLIMPORT void DrawTriangle();//绘制三角形命令
DLLIMPORT void DrawTriangles();//绘制三角形命令
DLLIMPORT void DrawTriangleFAN();//绘制三角形命令
DLLIMPORT void DrawQuad();//四边形
DLLIMPORT void DrawQuads();//四边形
DLLIMPORT void DrawPolygon();//多边形
DLLIMPORT void penAngle0();
DLLIMPORT float penAngle1(float ang);
DLLIMPORT void penAngle2(float ang1,float ang2);
DLLIMPORT void penBack(int val);
DLLIMPORT void penHome();
DLLIMPORT void penArc(float r,float lenth,float d) ;
void penMove(int x,int y);
void penMove(int x,int y,int z);
void penMoveTo(int x,int y,int z);
void penMoveTo(int x,int y);
void penDotWidth(int size);
void penLineWidth(int size);
void penLine(int x,int y);
void penLine(int x,int y,int z);
void penLine(int x1,int y1,int x2,int y2);
void penLine(int x1,int y1,int z1,int x2,int y2,int z2);
void penText2(int x,int y,string str);
void penText3(int x,int y,int z,string str);
void penColorString(string c);
void penPoint2(int x,int y);
void penPoint3(int x,int y,int z);
void penColorInt(int val);
void penColorString(string c);
void penColorRGB(int r,int g,int b);
class DLLIMPORT pen
{
  public:
    void Show(int val);//显示笔
    void Speed(int val);//笔速度
    void Go(int val);
    void Back(int val);
    void Home(void);
    float Angle();//角度对线条有作用
    float Angle(float ang);
    void Arc(float r,float lenth,float d);
    void Angle(float ang1,float ang2);
    void Move(int x,int y,int z);
    void Move(int x,int y);
    void MoveTo(int x,int y,int z);
    void MoveTo(int x,int y);
    void DotWidth(int size);
    void LineWidth(int size);
    void Line(int x,int y);
    void Line(int x,int y,int z);
    void Line(int x1,int y1,int x2,int y2);
    void Line(int x1,int y1,int z1,int x2,int y2,int z2);
    int GetX();
    int GetY();
    int GetZ();
    double GetAngleXY();
    double GetAngleXZ();
    void Font(char *f);
    void FontSize(int s);
    void Text(int x,int y,int n);
    void Text(int x,int y,double value,int ndig);
    void Text(int x,int y,string str);
    void Text(int x,int y,int z,string str);
    void Text(int x,int y,int z,int n);
    void Text(int x,int y,int z,float value,int ndig);
    void Color(int r,int g,int b,int alpha);
    void Color(int r,int g,int b);
    void Color(int val);
    void Color(string c);
    void Point(int x,int y);
    void Point(int x,int y,int z);

  private:
};

