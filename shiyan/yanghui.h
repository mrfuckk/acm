#include<iostream>
#define Max 99
using namespace std;
class YangHui{
    public:
      void output(int num){
        n = num;
        int i,j;
        int triangle[Max][Max];
        for(i=0;i<n;i++)
        {
          for(j=0;j<n-i;j++)
          {
            cout<<" ";
          }
          for(j=0;j<=i;j++)
          {
            if(j==0||j==i) triangle[i][j]=1;
            else triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
            cout<<triangle[i][j]<<" ";
          }
          cout<<endl;
        }
      }
    private:
      int n;

};
