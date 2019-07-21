/*malloc_1d-array.c Deixnei pws desmeuoume xwro gia enan monodiastato pinaka */
#include <stdio.h>
#include <stdlib.h>

main()
{
	int *p; //Dilwsi deikti
	int i,N; 
	
	/* Diavasma Diastasis Pinaka */
	printf("Dwse ti diastasi tou pinaka: ");
	scanf("%d",&N);
	
	/* Dynamiki Desmeysi mnimis */
	p=malloc(sizeof(int)*N);
	if (!p)
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}

	/* Kapoios Ypologismos ston pinaka */
	for (i=0; i<N; i++)
	{
		p[i]=i*i*i;
		printf("\np[%d]=%d",i,p[i]);	
	}
		
	/* Apodesmeysi Mnimis */
	free(p);
}
