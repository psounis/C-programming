#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

main()
{
	int pinakas[SIZE];
	int i,N;
	
	/* 1. Diavasma tis diastasis tou pinaka */
	
	do{
		printf("Dwse to plithos twn stoixeiwn tou pinaka(20..100): ");
		scanf("%d", &N);
	} while (N<20 || N>100);
	
	/* 2. Arxikopoiisi tou Pinaka */
	srand(time(NULL));
	
	for (i=0; i<N; i++)
		pinakas[i]=rand()%1000;
	
	/* 3. Ektipwsi twn stoixeiwn tou pinaka */
	
	printf("[");
	for (i=0; i<N-1; i++)
		printf("%d, ",pinakas[i]);	
	printf("%d]",pinakas[N-1]);
	
}
