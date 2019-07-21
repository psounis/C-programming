/*malloc_2d-array.c Deixnei pws desmeuoume xwro gia enan didiastato pinaka */
#include <stdio.h>
#include <stdlib.h>

main()
{
	int **p; //Dilwsi diplou deikti-pinaka
	int i,j,M,N; 
	
	/* Diavasma Diastasewn Pinaka */
	printf("Dwse to plithos twn grammwn tou pinaka: ");
	scanf("%d",&M);
	printf("Dwse to plithos twn stilwn tou pinaka: ");
	scanf("%d",&N);
	
	/* Dynamiki Desmeysi mnimis */
	p=malloc(sizeof(int*)*M);
	if (!p)
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	for (i=0; i<M; i++)
	{
		p[i]=malloc(sizeof(int)*N);
		if (!p[i])
		{
			printf("Adynamia desmeusis mnimis");
			exit(0);
		}
	}
	
	/* Kapoios Ypologismos ston pinaka */
	for (i=0; i<M; i++)
	{
		for (j=0; j<N; j++)
		{
			p[i][j]=1+(i+j)%5;
			printf("%2d ",p[i][j]);	
		}
		printf("\n");
	}
		
	/* Apodesmeysi Mnimis */
	for (i=0; i<M; i++)
		free (p[i]);
	free(p);
}
