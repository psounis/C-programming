/*sxesiakoi.c: Anadeikniei tin leitoyrgia twn sxesiakwn telestwn*/
#include <stdio.h>

main()
{
   int x=2;
   int y=1;
   int z;   
   printf("\nx=%d,y=%d",x,y);
   printf("\n=========",x,y);
   z=(x>y);
   printf("\nx>y:%d",z);
	
   z=(x>=y);
   printf("\nx>=y:%d",z);
 
   z=(x==y);
   printf("\nx==y:%d",z);  
   
   z=(x<=y);
   printf("\nx<=y:%d",z);
	
   z=(x<y);
   printf("\nx<y:%d",z);
} 

