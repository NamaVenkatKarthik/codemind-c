#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int a[n];
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        {
            sum=sum+a[i];
        }
    }
    avg=sum/(n*1.0);
    printf("%0.2f",avg);
}