#include<stdio.h>
int main()
{
    int n,u,i;
    scanf("%d%d",&n,&u);
    for(i=1;i<=u;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}