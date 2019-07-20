/* ask4.c */

#include <stdio.h>

main()
{
   int N;
   int i,j;
   
   N=13;
   
   for(i=0; i<=N; i++)
   {
      for (j=i; j<=N; j++)
      {
         printf("X");
      }
      printf("\n");
   }
}

