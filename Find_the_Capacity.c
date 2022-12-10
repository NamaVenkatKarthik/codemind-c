#include<stdio.h>
int main()
{
    int i,n,s,t,b,cap;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&s,&t,&b);
    }
    for(i=0;i<n;i++)
    {
        cap=s*t*b;
    }
    printf("%dKB",cap);
}