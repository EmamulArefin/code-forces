#include<iostream>
using namespace std;
int main()
{
    int T,sum[T];
    cin>>T;
    if(T<=125)
    {
        for(int i=0;i<T;i++)
        {
            int a,b;
            cin>>a>>b;
            if((a>0&&b>0)&&(a<10&&b<10))
            {
               sum[i]=a+b;
            }

        }
       for(int i=0;i<T;i++)
       {
         cout<<"case "<<(i+1)<<":"<<sum[i]<<'\n';
       }
    }
    return 0;
}


