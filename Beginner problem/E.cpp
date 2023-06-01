#include<iostream>
using namespace std;
int main()
{
    int T,A,B;
    cin>>T;
        for(int i=1;i<=T;i++)
        {
            int sum1=0;
            int sum2=0;
            cin>>A>>B;
            while(A!=0)
            {
                int rem=A%10;
                sum1=sum1*10+rem;
                A=A/10;
            }
            while(B!=0)
            {
                int rem=B%10;
                sum2=sum2*10+rem;
                B=B/10;
            }
            cout<<sum1+sum2<<endl;
        }
        return 0;
}
