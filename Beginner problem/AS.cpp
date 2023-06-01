#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int A;
    float B;
    cin>>A>>B;
    cin>>setprecision(2);
    float multi=(float)A*B;
    int mul=(int)multi;
    cout<<mul<<endl;

    return 0;

}
