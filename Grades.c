#include<stdio.h>
int main()
{
    int p,c,b,m,cs,k;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    k=((p+c+b+m+cs)/5);
    if(k>=90)
    printf("Grade A");
    else if(k>=80)
    printf("Grade B");
    else if(k>=70)
    printf("Grade C");
    else if(k>=60)
    printf("Grade D");
    else if(k>=60)
    printf("Grade E");
    else
    printf("Grade F");
}