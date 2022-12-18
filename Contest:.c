#include<stdio.h>
int main()
{
    int n,a=1,q1,b=2,q2,x;
    scanf("%d%d%d",&x,&q1,&q2);
    n=a*q1+b*q2;
    if(n>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}