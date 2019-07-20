/* ask3.c */

#include <stdio.h>

main()
{
   int M,N;
   int i,j;
   
   M=10; 
   N=20;
   
   i=0;
   while(i<=M)
   {
   	  j=0;
      while(j<=N)
      {
         printf("X");
         
         j++;
      }
      
      printf("\n");
      
      i++;
   }
}

