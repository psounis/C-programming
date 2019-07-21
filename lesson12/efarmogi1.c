#include <stdio.h>
#include <stdlib.h>

main()
{
	double **p; //Dilwsi diplou deikti-pinaka
	int i,j,M,N; 
	
	/* Diavasma Diastasewn Pinaka */
	printf("Dwse to plithos twn grammwn tou pinaka: ");
	scanf("%d",&M);
	printf("Dwse to plithos twn stilwn tou pinaka: ");
	scanf("%d",&N);
	
	/* Dynamiki Desmeysi mnimis */
	p=malloc(sizeof(double*)*M);
	if (!p)
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	for (i=0; i<M; i++)
	{
		p[i]=malloc(sizeof(double)*N);
		if (!p[i])
		{
			printf("Adynamia desmeusis mnimis");
			exit(0);
		}
	}
	
	/* Kapoios Ypologismos ston pinaka */

	printf("O xwros pou desmeutike dynamika einai: %d+%d+%d=%d",
			M*N*sizeof(double),M*sizeof(double *),sizeof(double **),
			M*N*sizeof(double)+M*sizeof(double *)+sizeof(double **));


		
	/* Apodesmeysi Mnimis */
	for (i=0; i<M; i++)
		free (p[i]);
	free(p);
}
