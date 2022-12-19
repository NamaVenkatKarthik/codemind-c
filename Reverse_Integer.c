#include <stdio.h>

int main()
{
   int Number, Temp, Reminder, Rev = 0;
   scanf("%d", &Number);
  
   Temp = Number;

   while ( Temp!=0)
   {
      Reminder = Temp %10;
      Rev = Rev *10+ Reminder;
       Temp = Temp /10;
   }
   printf("%d",Rev);
}
