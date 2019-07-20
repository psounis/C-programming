/* if_02.c: Deixnei tin xrisi tis if..else */
#include <stdio.h>

main()
{
   int x;
   int y;
   
   printf("Dwste ton akeraio x: ");
   scanf("%d",&x);
   printf("Dwste ton akeraio y: ");
   scanf("%d",&y);
   
   if(x<y)
     printf("Isxyei x<y");
   else if(x==y)
     printf("Isxyei x=y");
   else
     printf("Isxyei x>y");

   
} 

