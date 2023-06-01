#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N,maxi,mini,i;
    cin>>N;
                int A[N];
                for(i=0; i<N; i++)
                {
                    cin>>A[i];
                }
                maxi = A[0];
                mini=A[0];
                for(i=0; i<N; i++)
                {
                    if(maxi<A[i])
                    {
                        mini=maxi;
                        maxi=A[i];
                    }

                    else if(mini<A[i])
                    {
                        mini=A[i];
                    }
                }
    cout<<maxi<<endl;
    cout<<mini;
    return 0;
}

