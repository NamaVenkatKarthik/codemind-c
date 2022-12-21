#include<stdio.h>
int main()
{
    int n,t,sum=0,r;
    scanf("%d",&n);
    t=n*n;
    while(t>0)
    {
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
