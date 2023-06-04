#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2;
         for(int j=s2.length()-1;j>=0;j--)
            {
                s3+=s2[j];
            }
    if(s1==s3)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
