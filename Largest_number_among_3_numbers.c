#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&c<b)
    printf("%d",b);
    else if(b<a&&c<a)
    printf("%d",a);
    else
    printf("%d",c);
}