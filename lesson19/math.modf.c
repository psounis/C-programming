/* math.modf.c: Anadeikniei ti xrisi tis modf */
#include <stdio.h>
#include <math.h>

main()
{
   double x;
   double r,y;
	
   for (x=0.0; x<5.0; x+=0.6)
   {
      r=modf(x,&y);
      printf("\n%.2f = %.2f + %.2f",x,y,r);
   }
}

