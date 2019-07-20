/* ask2.c */
#include <stdio.h>

main()
{
   int i,j;
   
   for(i=1; i<=4; i++)
   {
      for (j=1; j<=4; j++)
      {
         printf("\n%d+%d=%d",i,j,i+j);
      }
   }
}

