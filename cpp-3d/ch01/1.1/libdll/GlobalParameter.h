#pragma once
#include "GLAUX.H"
#include "StructDefine.h"
#pragma comment( lib, "glaux.lib")		// GLaux连接库
#include <vector>
#include <string.h> 
#include <gl/gl.h>
#include "GL/glut.h"
using namespace std;


extern GLfloat xRot    ;  
extern GLfloat yRot   ;   
extern int Screen_x      ;
extern int Screen_y      ;
extern HWND hWnd;
extern HDC   hDC;
extern HGLRC hRC;        
extern MSG   msg;
extern BOOL  bQuit;
extern int   argc;
extern char* argv[];
extern int  Is3D        ; 
extern float PenX        ;
extern float PenY        ;
extern float PenZ        ;
extern float angleXY     ;
extern float angleXZ     ;
extern int   posX        ;
extern int   posY        ;
extern int BackColorR;   
extern int BackColorG;   
extern int BackColorB;   
extern int WinR          ;
extern int WinRX         ;
extern int WinRY         ;
extern int OpenFrog      ;//打开雾效 
extern int TimerIndex    ;//---
extern int LoopIndex;
extern int view          ;//设置视图模式
extern int Red,Blue,Green ;//红,绿,蓝 
extern int autorun       ;//自动增量 
extern int RunOneRand    ;
extern int showball             ;
extern char NAME[100];//程序名 
extern int NeonR;
extern int NeonG;
extern int NeonB;//霓虹灯 
extern int OpenNeon;
extern int frogdesity;
extern int CanBig;
extern int LINE;
extern int INFO;
extern int SLEEP;
extern float YEAR;
extern float MONTH;
extern float DAY;
extern float HOUR;
extern float MINUTE;
extern float SECOND;
extern int RunOneTexture;
extern int Zoom;
extern int TextSize;
extern char* TextStyle; 
extern int LightMatrix;
extern int OpenMatrix;
extern int MouseX;
extern int MouseY;
extern int MouseDown;//鼠标是否按下的开关 
extern int KeyDown;
extern int RunOnceChar;//因为不输出文字，图片显示不出，所以必须显示一次 
extern int RunRunRun;
extern char KeyBoard; 
extern float StlScale;//STL文件缩放比例 
extern GLuint back_bmp[2];
extern int ShowSpeed;
extern int SetTime;
extern GLuint g_bitmap[20000][2];//纹理对应的编号 定义纹理的映射个数

extern int bitmap_Num;
extern std::vector <memo> CMD;//将所有的绘图命令都存在此处 
extern std::vector <vertex> ver;//保存线段端点坐标 
extern std::vector <BMPstruct> m_bmpshow;//picture
extern std::vector <PICstruct> m_Texture; 
extern std::vector <rott> AngR;
extern std::vector <tim> timer;
extern std::vector <sca> scale;
extern std::vector <mov> mmove; 
extern std::vector <stt> MyTxt;
extern std::vector <lop> MyLoop;
extern std::vector <string> Talk_in;
extern std::vector <string> Talk_out; 
////导入模型
////导入模型
extern  int modleNum ;
extern  float modeltrans[100][3];
extern  float modelrorate[100][3];
extern  float modelscale[100];
extern  int model_triangle_num[100] ;
extern  float *(model_verts[100]) ;
extern  float *(model_normal[100]) ;
