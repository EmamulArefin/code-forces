#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    if(T<=1000){
            int array1[T];
    for(int i=1;i<=T;i++)
    {
        int N,sum=0;
        cin>>N;
    while(N!=0)
    {  int rem=N%10;
        sum=sum*10+rem;

        N=N/10;}
    array1[i]=sum;
    }
    for(int i=1;i<=T;i++)
    {
        cout<<array1[i]<<endl;
    }
    }
    return 0;
}
