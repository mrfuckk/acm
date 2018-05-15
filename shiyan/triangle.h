//判断三角形
#include<iostream>
#include<math.h>
using namespace std;
class triangle{
  public:
   void settri(float a,float b,float c)
   {//将用户的输入赋值给x,y,z
        x=a;
        y=b;
        z=c;
    }
    void gettri()
    {//判断三角形的形状
      if(x+y>z&&y+z>x&&x+z>y){
        if(x==y&&y==x){
          cout<<"等腰三角形"<<endl;
        }else if(x==y||x==z||y==z){
          cout<<"等边三角形"<<endl;
        }else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x)){
          cout<<"直角三角形"<<endl;
        }else{
          cout<<"一般三角形"<<endl;
        }
      }
    }
  private:
    float x,y,z;
};
