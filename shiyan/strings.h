/*输入字符串查找所有出现的位置输出他们的位置
 *并用其它字符串替换他们，并输出替换后的结果
 */
#include<iostream>
#include<string>
using namespace std;
class STR{
  public:
    void mystrfind(string stra,string strb){
      int num = 0;
      int i = stra.find(strb,0);//在stra中找字串
      cout<<"查找到的字符位置为:"<<endl;
      while(i!=stra.npos){//不查到结尾不退出
        cout<<i<<"  ";//输出找到字串的位置
        num++;
        i = stra.find(strb,i+1);//找到一个之后继续往后找
        //所以i+1
      }
      if(num==0){
        cout<<"404 not found!!"<<endl;
      }
    }
    void mystringreplace(string&s1,const string&s2,const string &s3)
    {
      string::size_type pos=0;
      string::size_type a=s2.size();
      string::size_type b=s3.size();
      while((pos=s1.find(s2,pos))!=string::npos){
        s1.replace(pos,a,s3);
        pos+=b;
      }
      cout<<"替换后的结果为:"<<s1<<endl;
    }
  private:
    string a;
    string b;

};
