#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    float d,c,sum1,sub1;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&d,&c);

    sum=a+b;
    sub=a-b;

    sum1=d+c;
    sub1=d-c;

    printf("%d %d",sum,sub);
   printf("\n%.1f %.1f",sum1,sub1);

    return 0;
}
