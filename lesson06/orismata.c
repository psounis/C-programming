/* orismata.c: Anadeikniei pos pairname orismata se sinartiseis */

#include <stdio.h>

int square(int x);

main()
{
   int a=5;
   int b=10;
   int teta,tetb,sum;
 
   teta=square(a);
   tetb=square(b);
   sum=teta+tetb;
   printf("%d^2 + %d^2 = %d",a,b,sum);
}

int square(int x)
{
  int y;
  
  y=x*x;
  
  return y;
}

