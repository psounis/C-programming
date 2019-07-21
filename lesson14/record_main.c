#include <stdio.h>
#include <stdlib.h>
#include "record.h"

main()
{
	RECORD *pinakas, x;
	int i,N, choice;
	
	printf("Dwse to plithos twn eggrafwn: ");
	scanf("%d", &N);
	
	pinakas=malloc(sizeof(RECORD)*N);
	if(!pinakas)
	{
		printf("Adynamia Desmeusis Mnimis");
		exit(0);
	}
	
	/* Arxikopoiisi twn stigmiotypwn */
	for (i=0; i<N; i++)
		init_record(&pinakas[i]);
	init_record(&x);

	/* Diavasma twn dedomenwn twn stigmiotypwn */
	for (i=0; i<N; i++)
	{
		printf("%do atomo: \n",i+1);
		read_record(&pinakas[i]);		
	}
	
	/* Ektypwsi twn stigmiotypwn */
	for (i=0; i<N; i++)
		print_record(pinakas[i]);

	/* Antigrafi tou stigmiotypoy */
	printf("\n\nEpelekse eggrafi gia antigrafi (0-%d): ", N-1);
	scanf("%d", &choice);
	
	copy_record(&x, pinakas[choice]);
	
	printf("\n\nEktypwsi stigmiotypou: ");
	print_record(x);

	/* Apeleftherosi tis mnimis */
	for (i=0; i<N; i++)
	{
		free_record(pinakas[i]);
	}
	free_record(x);	
	free(pinakas);
}

