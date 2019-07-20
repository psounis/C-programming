/*monadiaioi.c: Anadeikniei tin leitoyrgia twn monadiaiwn telestwn*/

#include <stdio.h>

main()
{
   int x=1;
   int y=1;
   
   printf("%d,%d",x++,++y);
   printf("\n%d,%d",x++,++y);
   printf("\n%d,%d",x++,++y);
   printf("\n%d,%d",x,y);
   
} 
