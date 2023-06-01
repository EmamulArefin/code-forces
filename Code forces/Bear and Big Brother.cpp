#include<iostream>
using namespace std;
int main()
{
    bool test=false;
    int a,b,n=0;
    cin>>a>>b;
    while(test!=true)
    {
        a=3*a;
        b=2*b;
        n++;
        if(a>b)
        {
            test=true;
        }
    }
    cout<<n;
    return 0;
}
