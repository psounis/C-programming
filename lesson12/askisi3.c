#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

main()
{
	int st_array[SIZE][SIZE];
	int **dyn_array;
	int N; 
	int i,j;
	
	srand(time(0));
	
	/* Statikos Pinakas */ 
	
	do {
		printf("Dwse N: ");
		scanf("%d", &N);
		
		if (N<5 || N>20)
			printf("Lathos Eisodos (5..20). ");
	} while (N<5 || N>20);
	
	for (i=0; i<N; i++)
	{
		for (j=0; j<=i; j++)
			st_array[i][j]=1+rand()%(8+1);
		
		for (j=i+1; j<N; j++)
			st_array[i][j]=0; 
	}
	
	printf("Statikos Pinakas: \n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			printf("%d ", st_array[i][j]);
		printf("\n");
	}
	
	/* Dynamikos Pinakas */
	
	dyn_array = (int **)malloc(N*sizeof(int *));
	if (!dyn_array)
	{
		printf("Adynamia desmeusis mnimis!");
		exit(0);
	}
	
	for (i=0; i<N; i++)
	{
		dyn_array[i]=(int *)malloc((i+1)*sizeof(int));
		if (!dyn_array[i])
		{
			printf("Adynamia desmeusis mnimis!");
			exit(0);
		}			
	}

	for (i=0; i<N; i++)
	{
		for (j=0; j<=i; j++)
			dyn_array[i][j]=1+rand()%(8+1);
	}
	
	printf("Dynamikos Pinakas: \n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<=i; j++)
			printf("%d ", dyn_array[i][j]);
			
		for (j=i+1; j<N; j++)
			printf("0 ");
		printf("\n");
	}

	/* Antigrafi apo static ston dynamic */
	
	for (i=0; i<N; i++)
		for (j=0; j<=i; j++)
			dyn_array[i][j]=st_array[i][j];
			
	/* Ektypwsi Pinakwn */ 
	
	printf("Statikos Pinakas: \n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<N; j++)
			printf("%d ", st_array[i][j]);
		printf("\n");
	}
	
	printf("Dynamikos Pinakas: \n");
	for (i=0; i<N; i++)
	{
		for (j=0; j<=i; j++)
			printf("%d ", dyn_array[i][j]);
			
		for (j=i+1; j<N; j++)
			printf("0 ");
		printf("\n");
	}
	
	for (i=0; i<N; i++)	
		free(dyn_array[i]);
	free(dyn_array);
					
}
