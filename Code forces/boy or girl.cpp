#include<iostream>
using namespace std;
int main()
{
    int coun=0;
    string a;
    cin>>a;
    int len= a.length();
    for(int i=0; i<len; i++)
    {
        if(a[i]=='1')
        {
            continue;
        }
        for(int j=i; j<len; j++)
        {
            if(a[i]==a[j+1])
            {
                coun++;
                a[j+1]='1';
            }
        }
    }
    int total=len-coun;
    if(total%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
