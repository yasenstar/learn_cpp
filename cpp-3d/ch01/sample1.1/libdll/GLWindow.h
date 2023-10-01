#ifndef _window_h_
#define _window_h_


#include <windows.h>
#include "win.h"
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <gl/gl.h>
#include <gl/glut.h>
#include <gl/glu.h>
#include <string.h> 
#include <cstring>
#include <string> 
#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <ctime>
#include <deque>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <utility>
#include <cwchar>
#include <stack>
#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif
using namespace std;

DLLIMPORT float GetYear();//����� 
DLLIMPORT float GetMonth();//����� 
DLLIMPORT float GetDay();//����� 
DLLIMPORT float GetHour();//���Сʱ 
DLLIMPORT float GetMinute();//��÷��� 
DLLIMPORT float GetSecond();//����� 
#endif 

