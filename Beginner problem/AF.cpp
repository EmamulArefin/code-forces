#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    if(1<=T<=1000)
    {
        for(int i=1;i<=T;i++)
        {
            int A,B,C;
            cin>>A>>B>>C;
            if(1<=(A,B,C)<=180)
            {
                int sum=A+B+C;
                if(sum<=180)
                {
                    cout<<"YES"<<endl;
                }
                else{cout<<"NO"<<endl;}
            }
            else{}
        }
    }
    else{}

    return 0;

}

