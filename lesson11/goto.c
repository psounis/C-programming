/* goto.c: Deixnei tin xrisi tis goto */

#include <stdio.h>

main()
{
    int i=0;

label: // To onoma tis etiketas
    printf("\ni=%d",i);
    
    if (i<5) 
    {
       i++;
       goto label;
    }
}

