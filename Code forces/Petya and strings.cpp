#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   string a,b;
   cin>>a;
   cin>>b;
    int len1=a.length();
    int len2=b.length();
   char ab[len1+1];
   char ba[len2+1];
   strcpy(ab,a.c_str());
   strcpy(ba,b.c_str());
   strlwr(ab);
   strlwr(ba);
   int value=strcmp(ab,ba);
   cout<<value;
    return 0;
}
