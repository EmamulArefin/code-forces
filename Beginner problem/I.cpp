#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,sum,sub;
    float d,c,sum1,sub1;
    cin>>a>>b;
    cin>>d>>c;

    sum=a+b;
    sub=a-b;

    sum1=d+c;
    sub1=d-c;

    cout<<sum<<" "<<sub<<endl;
    cout<<showpoint;
    cout<<setprecision(2);
    cout<<sum1<<" " <<sub1<<endl;

    return 0;
}
