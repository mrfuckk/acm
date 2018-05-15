#include<iostream>
#include<math.h>
#include"triangle.h"
#include"strings.h"
#include"file.h"
#include"bin.h"
#include"yanghui.h"//将每个实验的头包含进来
using namespace std;
int main(){
  cout<<"+--------------------------------+"<<endl;
  cout<<"+---------欢迎使用---------------+"<<endl;
  cout<<"+1.三角形判断--------------------+"<<endl;
  cout<<"+2.字符串查找和替换--------------+"<<endl;
  cout<<"+3.文件创建写入和读取------------+"<<endl;
  cout<<"+4.二进制与十进制的转换----------+"<<endl;
  cout<<"+5.扬辉三角----------------------+"<<endl;//用户欢迎界面
  cout<<"请输入你要测试的实验:";
  int chose;
  cin>>chose;//提示用户想要展示的实验
  switch(chose)
  {
    case 1: //实验一
    {  
      cout<<"您选择的是三角形判断实验"<<endl;
      cout<<"请输入三条边的长度:"<<endl;
      float s1,s2,s3;
      cin>>s1>>s2>>s3;
      triangle tri;
      tri.settri(s1,s2,s3);
      tri.gettri();
      cout<<"欢迎再次使用!"<<endl;
      break;
    }
    case 2://实验二
    { 
      cout<<"您选择的是字符串查找和替换实验"<<endl;
      cout<<"字符串查找请输入1"<<endl<<"字符串替换请输入2"<<endl;
      int chose_1;
      cin>>chose_1;
      string s4,s5,s6;
      STR str;//实例化一个对象
      switch (chose_1)
      {
        case 1://再次请求用户输入选择
        {
          cout<<"请输入原始字符串:"<<endl;
          cin>>s4;
          cout<<"请输入要查找的字符:"<<endl;
          cin>>s5;
          str.mystrfind(s4,s5);
          cout<<"欢迎再次使用!"<<endl;
        }
        case 2:
        {  
          cout<<"请输入原始字符串:"<<endl;
          cin>>s4;
          cout<<"请输入要查找的字符:"<<endl;
          cin>>s5;
          cout<<"请输入要替换的字符:"<<endl;
          cin>>s6;
          str.mystringreplace(s4,s5,s6);
          cout<<"欢迎再次使用!"<<endl;
          break;
        }
        default:
        {
          cout<<"没这个选项"<<endl;
          break;
        }
      }
      break;
      }
      case 3://实验三
      {
        cout<<"您选择的是文件创建写入和读取实验"<<endl;
        /*string filename;
        cout<<"请输入你要创建文件的文件名"<<endl;
        cin>>filename;*/
        File file;
        file.createfile();
        file.openfile();
        cout<<"欢迎再次使用!"<<endl;
        break;
      }
      case 4: //实验四
      {
        cout<<"您选择的是二进制与十进制转换实验"<<endl;
        int num;
        BIN bin;
        cout<<"请输入一个十进制数:"<<endl;
        cin>>num;
        bin.inttobin(num);
        cout<<"欢迎再次使用!"<<endl;
        break;
      }
      case 5://实验五
      {
        cout<<"您选择的是打印扬辉三角实验"<<endl;
        int s7;
        cout<<"请输入你要打印扬辉三角的行数:"<<endl;
        cin>>s7;
        YangHui yang;
        yang.output(s7);
        cout<<"欢迎再次使用!"<<endl;
        break;
      }
      default:
      {
        cout<<"无效输入"<<endl;
      }
  }
  return 0;
}
