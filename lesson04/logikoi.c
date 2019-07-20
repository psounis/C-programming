/*logikoi.c: Anadeikniei tin leitoyrgia twn logikwn telestwn*/

#include <stdio.h>

main()
{
   int x=1;
   int y=2;
   int z;
   
   z=(y>x) && (x<x);
   printf("%d",z);
   z=(x=x) && (y==y);
   printf("%d",z);   
} 

