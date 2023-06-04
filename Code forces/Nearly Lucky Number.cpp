#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=0;
    cin>>a;
    string con= to_string(a);
    int len= con.length();

    for(int i=0;i<len;i++)
    {
        if(con[i]=='4'|| con[i]=='7')
        {
            b++;
        }
    }
    if(b==4 || b==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
