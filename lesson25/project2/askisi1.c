#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MALLOC(p,t,n) p=(t *)malloc((n)*sizeof(t)); \
   if (!p) { \
     fprintf(stderr, "Error Allocating Memory"); \
     exit(errno); \
   }

main()
{
	int *pin; 
	int i; 
	
	MALLOC(pin,int,5);
	
	for (i=0; i<5; i++)
	{
		pin[i]=i*i;
		printf("%d ",pin[i]);
	}
	
	free(pin);
}
