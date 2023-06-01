#include<iostream>
using namespace std;
int main()
{
    int N;
    int sum=0;
    cin>>N;
    if(1<=N<=100)
    {
        int ar[N];
        for(int i=0; i<N; i++)
        {
            cin>>ar[i];
            if(ar[i]%2!=0)
            {
                sum=sum+ar[i];
            }
            else {}
        }
        cout<<sum;
    }
    else {}
    return 0;
}
