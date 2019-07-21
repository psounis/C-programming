/* continue.c: Deixnei tin xrisi tis continue */

#include <stdio.h>

main()
{
    int i;

    for (i=0; i<10; i++)
    {
       printf("\nArithmos: %d",i);
       if (i%2==0)
           continue;
       printf(", kai to tetragono tou: %d",i*i);
    }
}

