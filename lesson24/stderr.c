/* stderr.c */
#include <stdio.h>
#include <stdlib.h>

main()
{
	int *p;
	
	printf("Enarksi programmatos...\n");
	
	p=(int *)malloc(sizeof(int)*100000000000);
	if (!p)
	{
		fprintf(stderr, "Adynamia Desmeusis mnimis!\n");
		exit(0);
	}
	printf("Telos programmatos\n");
	free(p);
}
