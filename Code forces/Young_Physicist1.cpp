#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,a=0,b=0,c=0;
    cin>>n;
    while(n!=0)
    {
        cin>>x>>y>>z;
        a=a+x;
        b=b+y;
        c=c+z;
        n--;
    }
    if(a==0 && b==0 && c==0 )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
