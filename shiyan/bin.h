#include<iostream>
using namespace std;
class BIN{
    public:
      void inttobin(int num){
        num = num;
        int s[20];
        int i=0;
        cout<<num<<"的二进制为:"<<endl;
        while(num){
        s[i]=num%2;
        num=num>>1;
        i++;
        //上面的算法和下面的最普通的算法一样
        //while(num)
        //{
        //  s[i]=num%2;
        //  num/=2;
        //  i++
        //}
        //'/'与>>1的效果一样
        }
        for(i=i-1;i>=0;i--){
          cout<<s[i];
        }
        cout<<endl;
      }
    private:
      int num;
};
