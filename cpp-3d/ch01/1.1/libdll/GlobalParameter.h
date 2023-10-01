#pragma once
#include "GLAUX.H"
#include "StructDefine.h"
#pragma comment( lib, "glaux.lib")		// GLaux���ӿ�
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
extern int OpenFrog      ;//����Ч 
extern int TimerIndex    ;//---
extern int LoopIndex;
extern int view          ;//������ͼģʽ
extern int Red,Blue,Green ;//��,��,�� 
extern int autorun       ;//�Զ����� 
extern int RunOneRand    ;
extern int showball             ;
extern char NAME[100];//������ 
extern int NeonR;
extern int NeonG;
extern int NeonB;//�޺�� 
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
extern int MouseDown;//����Ƿ��µĿ��� 
extern int KeyDown;
extern int RunOnceChar;//��Ϊ��������֣�ͼƬ��ʾ���������Ա�����ʾһ�� 
extern int RunRunRun;
extern char KeyBoard; 
extern float StlScale;//STL�ļ����ű��� 
extern GLuint back_bmp[2];
extern int ShowSpeed;
extern int SetTime;
extern GLuint g_bitmap[20000][2];//�����Ӧ�ı�� ���������ӳ�����

extern int bitmap_Num;
extern std::vector <memo> CMD;//�����еĻ�ͼ������ڴ˴� 
extern std::vector <vertex> ver;//�����߶ζ˵����� 
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
////����ģ��
////����ģ��
extern  int modleNum ;
extern  float modeltrans[100][3];
extern  float modelrorate[100][3];
extern  float modelscale[100];
extern  int model_triangle_num[100] ;
extern  float *(model_verts[100]) ;
extern  float *(model_normal[100]) ;
