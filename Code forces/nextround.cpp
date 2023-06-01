#include<iostream>
using namespace std;
int main()
{
    int n,b,store,counter=0;
    cin>>n>>b;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        store=arr[b];
            if(arr[i]==0)
            {
                continue;
            }
            else if(arr[i]>=store)
            {
                counter++;
            }
            else{}
    }
    cout<<counter;
    return 0;
}
