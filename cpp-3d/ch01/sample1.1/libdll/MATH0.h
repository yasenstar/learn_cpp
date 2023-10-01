#ifndef _MATH0_h_
#define _MATH0_h_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

#include<string.h>

using namespace std;
string MATHConvert10_2(int number);
string MATHAdd(string str1,string str2);
string MATHSubtrack(string str1,string str2);
string MATHMultiply(string str1,string str2);
string MATHDivision(string s1,string s2);
string MATHFactorial(int n);
string MATHConvert10_N(int N,int d);
string MATHConvertN_10(string s,int n);
class DLLIMPORT MATH
{
  public:
    string Add(string str1,string str2);//高精度加
    string Subtrack(string a,string b);//高精度减
    string Multiply(string a,string b);//高精度乘
    string Division(string a,string b);//高精度除
    string Factorial(int n); //高精度阶乘
    string Convert10_2(int n);//十进制转二进制
    string Convert10_N(int N,int d);//十进制转N进制
    string ConvertN_10(string s,int n);//N进制转十进制，n表示进制
  private:
};
#endif
