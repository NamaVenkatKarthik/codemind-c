#include<stdio.h>
int main()
{
    int num1,num2;
    float avg;
    scanf("%d%d",&num1,&num2);
    avg=(num1+num2)*0.5;
    printf("Average of %d and %d is: %0.2f",num1,num2,avg);
}