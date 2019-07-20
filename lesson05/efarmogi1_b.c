/* ask1.c */
#include <stdio.h>

main()
{
   int i,sum,x;
   sum=0;
   
   for(i=0; i<10; i++)
   {
      printf("\nEisagete ton %d-o arithmo: ",i+1);
      scanf("%d",&x);
      sum=sum+x;
   }
   printf("\n\n%d",sum);
}

