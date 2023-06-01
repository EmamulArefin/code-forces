#include<iostream>
using namespace std;
int main()
{
    int T,X,Y;
    cin>>T;
    if(1<=T<=100)
    {
        for(int i=1; i<=T; i++)
        {
            cin>>X>>Y;
            if((0<=X<=9) && (0<=Y<=9))
            {
                if(X==Y)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else {}
        }
    }
    else {}
    return 0;
}
