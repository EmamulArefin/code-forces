#include<iostream>
using namespace std;
int main()
{
    int m,n=3,p=1;
    int sum;
    bool test=false;
    cin>>m;
    int arr[m][n];
    int narr[p];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum=0;
            for(int k=0; k<m; k++)
            {
                sum+=arr[k][j];
            }
            narr[p]=sum;
            p++;
        }
    }
    for(int l=1; l<=3; l++)
    {
        if(narr[l]==0)
        {
            test=true;
        }
        else
        {
            test=false;
        }
    }
    if(test==true)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
