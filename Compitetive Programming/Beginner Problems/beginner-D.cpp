#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t<=1000)
    {
        for(int j=1;j<=t;j++){
    int a,b,sum[1000];
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum[i]=i;
        }
    }
         for(int i=a;i<=b;i++)
    {
        cout<<sum[i]<<" ";
    }
    }}
    return 0;
}
