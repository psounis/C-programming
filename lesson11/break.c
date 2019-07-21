/* break.c: Deixnei tin xrisi tis break */

#include <stdio.h>

#define N 5

main()
{
    int i;
    int A[N]= {5, 3, 2, 4, 8 }; // Pinakas dedomenwn
    int x=2; // Pros anazitisi stoixeio

    /* Psaxnoume gia to stoixeio x ston pinaka A */    
    for (i=0; i<N; i++)
    {
        if (A[i]==x)
           break;
    }
    if (i<N) 
	printf("\nVrethike to stoixeio %d sti thesi %d",x,i);
    else 
	printf("\nDen Vrethike to stoixeio");
}
