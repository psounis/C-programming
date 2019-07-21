/* lib_array.c: Kwdikas twn sinartisewn */

#include <stdio.h>
#include <stdlib.h>
#include "lib_array.h"

void init_array(int *pinakas, int n, int a, int b)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0; i<n; i++)
		pinakas[i]=a+rand()%(b-a+1);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%d, ",pinakas[i]);
	printf("%d]",pinakas[n-1]);
}

int sum_array(int *pinakas, int n)
{
	int i, sum;
	
	sum=0;
	for (i=0; i<n; i++)
		sum+=pinakas[i];
		
	return sum;
}
