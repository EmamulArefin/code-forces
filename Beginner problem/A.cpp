#include<iostream>
using namespace std;
int main()
{
   unsigned int N;
    int sum =0;
    int sum1=0;
    cin>>N;
        while(N!=0)
        {
           int r=N%10;
           sum1=sum1*10+r;
           N=N/10;
        }
        while(sum1!=0)
        {
            int rem = sum1%10;
            sum = sum+rem;
            sum1=sum1/10;
        }
        cout<<sum;

    return 0;
}
