#include<stdio.h>
int main()
{
    char n[10];
    scanf("%s",n);
    for(int i=0; i<30; i++)
    {
        if(n[i] == '6')
        {
            n[i] = '9';
            break;
        }
    }
    printf("%s", n);
}
