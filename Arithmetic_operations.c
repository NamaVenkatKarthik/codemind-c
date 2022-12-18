#include<stdio.h>
int main()
{
    int a,b,sum,diff,prod,quo,rem;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum:%d
",sum);
    diff=a-b;
    printf("Difference:%d
",diff);
    prod=a*b;
    printf("Product:%d
",prod);
    quo=a/b;
    printf("Quotient:%d
",quo);
    rem=a%b;
    printf("Remainder:%d",rem);
    
}