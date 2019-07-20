/* ask1.c */
#include <stdio.h>

main()
{
   int i,prod,x;
   prod=1;
   
   for(i=0; i<3; i++)
   {
      printf("\nEisagete ton %d-o arithmo: ",i+1);
      scanf("%d",&x);
      prod=prod*x;
   }
   printf("\n\nTo ginomeno twn arithmwn einai: %d",prod);
}

