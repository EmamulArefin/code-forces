#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b=0,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        s.push_back(ch);
        toupper(s[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            b++;
        }
        else if(s[i]=='D')
        {
            c++;
        }
    }
    if(b>c)
    {
        cout<<"Anton";
    }
    else if(b<c)
    {
        cout<<"Danik";
    }
    else if(b==c)
    {
        cout<<"Friendship";
    }
    return 0;
}
