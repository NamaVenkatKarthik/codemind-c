#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int i,n,r,res=0,sum=0;;
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        r=n%10;
        res=fact(r);
        sum=sum+res;
        n=n/10;
    }
    if(t==sum)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
    
}
