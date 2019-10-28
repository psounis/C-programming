#include <stdio.h>

#define SIZE 6

typedef int (*pf) (int, int);

int compare_asc(int a, int b);
int compare_desc(int a, int b);

void insertion_sort(int *pinakas, int N, pf comp);
void swap(int *a, int *b);

main()
{
	int pin[]={1,5,3,2,8,7};
	int i; 
	
	insertion_sort(pin, SIZE, compare_desc);
	
	for (i=0; i<SIZE; i++)
		printf("%d ", pin[i]);
}

int compare_asc(int a, int b)
{
	if (a<b) return -1;
	else if (a==b) return 0;
	else return 1; 
}

int compare_desc(int a, int b)
{
	if (a<b) return 1;
	else if (a==b) return 0;
	else return -1; 
}

void insertion_sort(int *pinakas, int N, pf comp)
{
	int i,j; 
	
	for (i=1; i<N; i++)
	{
	   for (j=i; j>=1; j--)
	   {
	      if (comp(pinakas[j], pinakas[j-1])==-1)
	         swap(&pinakas[j], &pinakas[j-1]);
	      else
	         break;
	   }
	}	
}

void swap(int *a, int *b)
{
	int k=*a;
	*a=*b;
	*b=k;
}

