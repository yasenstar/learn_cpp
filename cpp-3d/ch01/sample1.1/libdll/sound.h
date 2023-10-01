#ifndef _sound_h_
#define _sound_h_

#include <gl/gl.h>
#include "GL/glut.h"
#include "GLAUX.H"
#include <cstring>
#include <string>
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
typedef void (*FUNC)();
DLLIMPORT void sound(int s,int c,float delay);
DLLIMPORT void beep(int t);
DLLIMPORT void Speak(string str);

DLLIMPORT void Thread_0(FUNC op);
DLLIMPORT void Thread_1(FUNC op);
DLLIMPORT void Thread_2(FUNC op);
DLLIMPORT void Thread_3(FUNC op);
DLLIMPORT void Thread_4(FUNC op);
DLLIMPORT void Thread_5(FUNC op);
DLLIMPORT void Thread_6(FUNC op);
DLLIMPORT void Thread_7(FUNC op);
DLLIMPORT void Thread_8(FUNC op);
DLLIMPORT void Thread_9(FUNC op);
void textcolor(int ForeColor,int BackGroundColor);
void Error(string str);
int ToDigit(const string& ss);
bool IsDigit(const string& str);
void speechSpeak(string str);
class DLLIMPORT speech
{

  public:
    void Chat();
    void Do();
    void Add(string s1,string s2);
    void Speak(string str);
  private:
};

class DLLIMPORT cmd
{
  public:
    void Cout(int x,int y,string str);
    string GetTitle();// 获取窗口标题
    void SetTitle(string str);//设置标题
    void Show(int x,int y,int l,int w);//设置位置和大小
    void Label(string s);
    void BackColor(string str);
    void TextColor(int ForeColor,int BackGroundColor);
    bool Clear();
    void HideCursor();
    void Size(int x,int y);
    int GetConsoleX();
    int GetConsoleY();
    int SetConsoleXY(int x,int y);
    int GetMouse();
    int GetMouseX(int u);
    int GetMouseY(int u);
    int GetKey();
    void DrawBox(int x,int y,int lenth,int height,string str);
    void Language(int v);
    void Rectangle(int x,int y,int lenth,int height,string str);
    void Input();
  private:
};

#endif
