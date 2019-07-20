/* ask3.c */

#include <stdio.h>

main()
{
   int M,N;
   int i,j;
   
   M=10; 
   N=20;
   
   for(i=0; i<=M; i++)
   {
      for (j=0; j<=N; j++)
      {
         printf("X");
      }
      printf("\n");
   }
}

