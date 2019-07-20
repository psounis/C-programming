/* if_01.c: Deixnei tin xrisi tis if */
#include <stdio.h>

main()
{
   int x;
   int y;

   printf("Dwste ton akeraio x: ");
   scanf("%d",&x);
   printf("Dwste ton akeraio y: ");
   scanf("%d",&y);
   
   if (x<y) 
      printf("\n%d<%d",x,y);
	
   if (x<=y) 
      printf("\n%d<=%d",x,y);

   if (x==y) 
      printf("\n%d==%d",x,y);
   
   if (x>y) 
      printf("\n%d>%d",x,y);

   if (x>=y) 
      printf("\n%d>=%d",x,y);
} 

