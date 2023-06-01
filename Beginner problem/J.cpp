#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int sum=0;
    cin>>a>>b;
    int ar[b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>ar[j];
            if(i==j)
            {
              sum=sum+ar[j];
            }
            else{}
        }
        cout<<sum<<endl;
    }
    return 0;
}
