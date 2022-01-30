//Program to print the number from 1 to 20 except 3 and 17. (using continue).

#include <stdio.h>
int main()
{
   for (int j=1; j<=20; j++)
   {
      if (j==3)
      {
        
        continue;
       }

      if (j==17)
      {
        
        continue;
       }
      
       printf("%d ", j);
   }
   return 0;
}
