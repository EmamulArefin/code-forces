#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;

    cin>>T;
        for(int a=1; a<=T; a++)
        {
            int N;
            cin>>N;
                int sum=0;
                int ar[N];
                    for(int i=0; i<N; i++)
                    {
                        cin>>ar[i];
                        sum=sum+ar[i];
                    }
                 cout<<sum<<endl;
                }
    return 0;
}
