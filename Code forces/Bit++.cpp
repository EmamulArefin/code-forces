#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string l;
    cin>>n;
    while(n!=0)
{
    cin>>l;
    if(l=="++X")
    {
        ++x;
    }
    else if(l=="X++")
    {
       x++;
    }
    else if(l=="--X")
    {
       --x;
    }
    else if(l=="X--")
    {
       x--;
    }
    else{}
    n--;
}
cout<<x;
return 0;
}
