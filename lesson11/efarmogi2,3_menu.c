#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void init_array(int *pinakas, int n, int a, int b);
void print_array(int *pinakas, int n);
int max_array(int *pinakas, int n);

main()
{
	int array[SIZE],N;
	int choice,a,b;
	
	while (1)
	{
		system("cls");
		printf("\n\nMENOY EPILOGWN");
		printf("\n--------------");
		printf("\n1-Eisagwgi tou megethous tou pinaka");
		printf("\n2-Arxikopoiisi Pinaka");
		printf("\n3-Ypologismos tou megistou");
		printf("\n4-Ektypwsi tou pinaka");
		printf("\n5-Eksodos");
		printf("\n Epilogi? ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("Dwse to megethos tou pinaka: ");
				scanf("%d", &N); 
				break;
			case 2:
				printf("Dwse tin arxi tou diastimatos tvn tyxaiwn: ");
				scanf("%d",&a);
				printf("Dwse to peras tou diastimatos tvn tyxaiwn: ");
				scanf("%d",&b);
				init_array(array, N, a, b);	
				break;
			case 3:
				printf("O megistos einai: %d", max_array(array, N));
				break;
			case 4:
				print_array(array, N);
				break;
			case 5:
				printf("Bye Bye");
				exit(0);	
			default:
				printf("Lathos eisodos! ");		
		}
		
		printf("\n\n");
		system("pause");
				
	}
	
	
	
}








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

int max_array(int *pinakas, int n)
{
	int i,max;
	
	max=pinakas[0];
	
	for (i=1; i<n; i++)
	{
		if (pinakas[i]>max)
			max=pinakas[i];
	}
	
	return max;
}
