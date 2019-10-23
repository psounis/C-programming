#include <stdio.h>


enum DATA_TYPE { INT, DOUBLE };

void selection_sort(void *pinakas, int N, enum DATA_TYPE d);
void swap(void *a, void *b, enum DATA_TYPE d);


main()
{
	double pin[10]={1,4.2,7,5,6.1,8,6,2.8,3.5,3};
	int i; 
	
	selection_sort(pin, 10, DOUBLE);
	
	for (i=0; i<10; i++)
		printf("%.1lf ", pin[i]);
}


void selection_sort(void *pinakas, int N, enum DATA_TYPE d)
{
	int pos, i, j; 
	
	switch(d)
	{
		case INT:
			for (i=0; i<N; i++)
			{
			   pos=i;
			
			   for (j=i+1; j<N; j++)
			   {
			      if (((int *)pinakas)[j]<((int *)pinakas)[pos])
			         pos=j;
			   }
				
			   swap(&((int *)pinakas)[i], &((int *)pinakas)[pos], d);
			}
			break; 
		case DOUBLE: 
			for (i=0; i<N; i++)
			{
			   pos=i;
			
			   for (j=i+1; j<N; j++)
			   {
			      if (((double *)pinakas)[j]<((double *)pinakas)[pos])
			         pos=j;
			   }
				
			   swap(&((double *)pinakas)[i], &((double *)pinakas)[pos],d);
			}
	}
	
}

void swap(void *a, void *b, enum DATA_TYPE d)
{
	int tempi;
	double tempd;
	
	switch(d)
	{
		case INT:
			tempi=*(int *)a;
			*(int *)a=*(int *)b;
			*(int *)b=tempi; 
			break; 
		case DOUBLE:
			tempd=*(double *)a;
			*(double *)a=*(double *)b;
			*(double *)b=tempd; 			
	}
}
