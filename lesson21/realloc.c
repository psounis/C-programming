/* realloc.c */ 

#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    int i; 
    int *p;
    
    /* Desmeusi gia 4 akeraious */ 
    n=4;
    p = (int *)malloc(n*sizeof(int));
    if (!p)
        printf("Error allocating memory!");
    
    /* Xrisi */
    for (i=0; i<n; i++)
        p[i]=i*i;
        
    /* Epanadesmeusi gia akomi 4 */
    n=8;
    p = (int *)realloc(p, n*sizeof(int));
    if (!p)
        printf("Error allocating memory!");

    /* Xrisi */
    for (i=4; i<n; i++)
        p[i]=i*i;
        
    for (i=0; i<n; i++)
        printf("%d ", p[i]);    

    /* Apodesmeusi Mnimis */ 
    free(p);
    
}
