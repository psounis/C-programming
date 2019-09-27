#include <stdio.h>
#include <stdlib.h>

void print_array(int *pinakas, int n);
void insertion_sort(int *pinakas, int n);
void swap(int *a, int *b);

main(int argc, char *argv[])
{
	int *array;
	int i,N;
	
	N=argc-1;
	
	array=malloc(sizeof(int)*N);
	if (!array)
	{
		printf("Adynamia desmeusis mnimis!");
		exit(0);
	}
	
	for (i=0; i<N; i++)
	{
		array[i]=atoi(argv[i+1]);
	}
	
	printf("Arxikos pinakas: ");
	print_array(array,N);
	
	insertion_sort(array,N);
	
	printf("\nTaksinomimenos pinakas: ");
	print_array(array,N);
}

void print_array(int *pinakas, int n)
{
	int i;
	
	printf("[");
	for (i=0; i<n-1; i++)
		printf("%2d, ",pinakas[i]);
	printf("%2d]",pinakas[n-1]);
}

void swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

void insertion_sort(int *pinakas, int n)
{
	int i,j;
	
	for (i=1; i<n; i++)
	{

		for (j=i; j>=1; j--)
		{
			if (pinakas[j]<pinakas[j-1])
				swap(&pinakas[j], &pinakas[j-1]);
			else
				break;
		}
	}	
}
