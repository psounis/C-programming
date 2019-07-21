/* matrix_pointers.c: Deixnei oti oi theseis mnimis enos pinaka einai diadoxikes */

#include <stdio.h>

#define N 4

main()
{
   int pin[N];
   int i;

   for (i=0; i<N; i++)
      printf("\nStoixeio:%d, Diefthinsi Thesis Mnimis: %d",i, &pin[i]);
}

