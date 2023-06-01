#include<iostream>
using namespace std;
int main()
{
    int n=3,i;
    int array1[n];
    for(i=0;i<n;i++)
    {
        cin>>array1[i];
    }
    int max=array1[0];
    int max2=array1[0];
    for(i=0;i<n;i++)
    {
        if(max<array1[i])
        {
            max2=max;
            max=array1[i];
        }
        else if(max2<array1[i]){
            max2=array1[i];}
    }
    cout<<max2<<'\n';
    return 0;
}
