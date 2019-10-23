#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void double_space(int *pin, int *N);
void half_space(int *pin, int *N);
void fill(int *pin, int N, int start, int finish);

main()
{
	int *p;
	int N=4; 
	int i, choice; 
	
	srand(time(0));
	
	p = (int *)malloc(N*sizeof(int));
	if(!p)
	{
		printf("Error Allocating Memory");
		exit(0);				
	}
	
	for (i=0; i<N; i++)
	{
		p[i]=i;
	}
	
	
	while(1)
	{
		printf("\nMENU: ");
		printf("\n1-Diplasiasmos ");
		printf("\n2-Ypodiplasiasmos ");
		printf("\n3-Ektypwsi ");
		printf("\n4-Eksodos ");
		printf("\nEpilogi? ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: 
				double_space(p, &N);
				fill(p,N,N/2,N-1);
				printf("\nO diplasiasmos egine!");
				break;
			case 2: 
				half_space(p, &N);
				printf("\nO ypodiplasiasmos egine!");
				break;
			case 3: 
				for (i=0; i<N; i++)
					printf("%d ", p[i]);
				break;
			case 4:
				printf("Bye bye!");
				free(p);
				exit(0);
		}
	}

}

void double_space(int *pin, int *N)
{
	*N=(*N)*2;
	
	pin=(int *)realloc(pin, *N);
	if (!pin)
	{
		printf("Error Allocating Memory");
		exit(0);		
	}
}


void half_space(int *pin, int *N)
{
	*N=(*N)/2;
	
	pin=(int *)realloc(pin, *N);
	if (!pin)
	{
		printf("Error Allocating Memory");
		exit(0);		
	}
}

void fill(int *pin, int N, int start, int finish)
{
	int i; 
	
	if (start>=0 && start<=finish && finish<=N-1)
	{
		for (i=start; i<=finish; i++)
			pin[i]=rand()%100; 
	}
}
