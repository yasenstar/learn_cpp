#include "picture.h" //加入绘图头文件 

int main()
{
  Model.Teapot(50,0);//显示大小为50，0为线条的茶壶
  Win.Run(10,1);//绘图窗体内的物体旋转
  Win.Show();//启动绘图窗口
}

