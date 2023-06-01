#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int narr[k];
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        if(n%arr[i]==0)
        {
            narr[k]=n/arr[i];
            k++;
        }
    }
    for(int j=0;j<k;j++)
    {
        cout<<narr[j]<<" ";
    }
    cout<<endl;
    int mini=narr[0];
    for(int i=0;i<k;i++)
    {
        if(narr[i]<mini)
        {
            mini=narr[i];
        }
    }
    cout<<mini;
    return 0;
}
