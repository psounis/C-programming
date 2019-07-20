/* complex_for.c: Deixnei to olokliromeno sintaktiko tis for */
#include <stdio.h>

main()
{
   int i,j;
   
   for (i=0,j=0; i<5 && j<5; i++,j+=2)
      printf("\ni=%d,j=%d: ",i,j);

}

