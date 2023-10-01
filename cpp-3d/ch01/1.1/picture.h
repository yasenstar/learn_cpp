//如果看到此文件，说明您未正确创建三维动画工程
//正确做法是点击笑脸图标，创建三维动画工程
//在弹出对话框中新建一个文件夹，因为所有工程文件都要放在一个文件夹内
//随后一路默认设置，不要更改任何地方，然后在main.cpp中编写代码即可
//如果以后再想打开此工程继续编辑时，应双击打开此文件夹下后缀名为.dev
//的工程文件,而不是单独打开main.cpp
#include <bits/stdc++.h>
#include <Pen.h>
#include <MATH0.h>
#include <LoadModel.h>
#include <Model.h>
#include <sound.h>
#include <win.h>
#include <ctime>
#include <pthread.h>
#define Seed() srand((unsigned)time(NULL))
#define Sound sound
#define Beep beep
#define IntToString inttostr
#define FloatToString ftostr
#define CharToString chartostring

#define printf printf
#define scanf scanf
#define return return
#define pause pause
#define short short
#define int int
#define long long
#define bool bool
#define char char
#define float float
#define double double
#define const const
#define getchar getchar
#define putchar putchar
#define system system
#define cin cin
#define cout cout
#define gets gets
#define puts puts
#define setw setw
#define dec dec
#define oct oct
#define hex hex
#define setprecision setprecision
#define setfill setfill
#define endl endl
#define fixed fixed
#define width width
#define put put
#define puts puts
#define using using
#define namespace namespace
#define getline getline
#define string string
#define iomanip iomanip
#define sqrt sqrt
#define abs abs
#define fabs fabs
#define else else
#define if if
#define switch switch
#define case case
#define default default
#define iostream iostream
#define cmath cmath
#define cstring cstring
#define cstdio cstdio
#define cstdlib cstdlib
#define for for
#define do do
#define break break
#define continue continue
#define ceil ceil
#define floor floor
#define define define
#define typedef typedef
#define freopen freopen
#define getc getc
#define putc putc
#define fgetc fgetc
#define fputc fputc
#define fscanf fscanf
#define fprintf fprintf
#define fputs fputs
#define fgets fgets
#define Sleep Sleep
#define clock_t clock_t
#define clock clock
#define rand rand
#define unsigned unsigned
#define srand srand
#define strcat strcat
#define strcpy strcpy
#define strlen strlen
#define strcmp strcmp
#define static static
#define void void
#define sort sort
#define sizeof sizeof
#define struct struct
#define size size
#define strlwr strlwr
#define strupr strupr
#define atof atof
#define atoi atoi
#define atol atol
#define assign assign
#define swap swap
#define append append
#define push_back push_back
#define insert insert
#define erase erase
#define replace replace
#define clear clear
#define length length
#define empty empty
#define find find
#define substr substr
#define isalpha isalpha
#define isalnum isalnum
#define isdigit isdigit
#define islower islower
#define isspace isspace
#define isupper isupper
#define tolower tolower
#define toupper toupper
#define labs labs
#define exp exp
#define log log
#define pow pow


window Win;
pen Pen;
LoadModel File;
MATH Math;
model Model;
speech Speech;
cmd Cmd;


