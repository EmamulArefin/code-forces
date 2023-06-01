#include<iostream>
using namespace std;
int main()
{
    int N,n;
    cin>>N>>n;
    int arr[n];
    for(int j=1; j<=N; j++)
    {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];

        }
        cout<<sum<<endl;
    }

    return 0;
}

