/* pointer_calc.c: Pws exoume prosvasi sta stoixeia enos pinaka mesw deikti */

#include <stdio.h>

#define N 10

main()
{
   int pin[N];
   int i;
   int *ptr;

   ptr=pin;
   for (i=0; i<N; i++)
   {
      printf("\nStoixeio:%d, Diefthinsi Thesis Mnimis: %d",i, ptr);
      ptr++;
   }
}

