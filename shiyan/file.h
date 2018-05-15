#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>//因为使用了exit()
using namespace std;
class File{
  public:
  int createfile(){//创建文件l
    //filename =  filename;//将形参filename传给变量fielname                    
    ofstream fout;//要写入文件要创建ofstream对象
    fout.open("filename.txt",ios::out|ios::app);//以写和追加的方式打开文件
    if(!fout.is_open()){
      cout<<"sorry 不能打开文件！！"<<endl;//如果打开失败直接退出
      exit(EXIT_FAILURE);
    }
    cout<<"你可以输入任何你想输入的:\n";
    string str;//定义一个字符串变量
    while(getline(cin,str)&&str.size()>0){//getline为一行一行的输入，当某行为空时退出
      fout<<str<<endl;//输入data用户输入的数据
    }
    cout<<"文件已保存"<<endl;
    fout.close();//关闭文件
    return 0;
  }
  void  openfile(){//打开文件
    ifstream fin;//实例化一个fin对象
    char ch;
    fin.open("filename.txt",ios::in);//以读的方式打开filename文件
    if(!fin.is_open()){
      cout<<"sorry 不能打开文件！！"<<endl;
      exit(EXIT_FAILURE);
    }
    cout<<"你刚才创建名为filename.txt的文件，内容为:"<<endl;
    while(fin.get(ch)){//以一个字符一个字符的方式读取文件
      cout<<ch;
    }
    fin.close();
  }
  private:
    char ch;
    string filename;
};  

