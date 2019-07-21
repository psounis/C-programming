/*malloc_var.c Deixnei pws desmeuoume xwro gia mia metavliti */
#include <stdio.h>
#include <stdlib.h>

main()
{
	int *p;
	
	p=malloc(sizeof(int));
	if (!p)
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	
	printf("Dwse enan akeraio arithmo: ");
	scanf("%d",p);
	printf("Pliktrologisate %d",*p);
	
	free(p);
}
