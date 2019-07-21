#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE1 100
#define SIZE2 200

main()
{
	int pinakas[SIZE1][SIZE2];
	int M,N;
	int i,j;

	/* 1. Diavasma twn diastasewn */
	
	do{
		printf("Dwse to plithos twn grammwn tou pinaka(10..100): ");
		scanf("%d", &M);
	} while (M<10 || M>100);
	
	do{
		printf("Dwse to plithos twn stilwn tou pinaka(8..200): ");
		scanf("%d", &N);
	} while (N<8 || N>200);
		
	/* 2. Arxikopoiisi me tyxaious arithmous */
	srand(time(NULL));
	
	for (i=0; i<M; i++)
		for (j=0; j<N; j++)
			pinakas[i][j]=rand()%201;
			
	/* 3. Ektypwsi tou pinaka */
	
	for (i=0; i<M; i++)
	{
		for (j=0; j<N-1; j++)
			printf("%d\t",pinakas[i][j]);
		printf("%d",pinakas[i][N-1]);
		
		printf("\n");
	}
	
}
