#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,d=0,c=0;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n;i++)
    {
        if(arr[i]<=w)
        {
            d++;
        }
        else
        {
            c+=2;
        }
    }

    cout<<d+c;

    return 0;
}
