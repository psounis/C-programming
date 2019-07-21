/* struct_array.c: Epeksergasia enos pinaka apo stigmiotupa domis */

#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

struct epafi {
	char name[STRING_SIZE];
	char phone[STRING_SIZE];
};

main()
{
	struct epafi *pinakas;
	int i,N;
	
	/* 1. Eisagwgi tis diastasis toy pinaka */
	printf("Dwse plithos epafwn: ");
	scanf("%d",&N);
	
	/* 2. Desmeusi Mnimis */
	pinakas=malloc(sizeof(struct epafi)*N);
	if (!pinakas)
	{
		printf("Adynamia desmeusis mnimis");
		exit(0);
	}
	
	/*3. Diavasma epafwn */
	fflush(stdin);
	for (i=0; i<N; i++)
	{
		printf("Dwse onomatepwnimo %d-ou atomou: ",i+1);
		gets(pinakas[i].name);
		printf("Dwse tilefwno %d-ou atomou: ",i+1);
		gets(pinakas[i].phone);
	}
	
	/*4. Ektypwsi epafwn */
	printf("\n\nEPAFES\n==============");
	for (i=0; i<N; i++)
	{
		printf("\n%d) %s (%s) ",i+1,
			pinakas[i].name,
			pinakas[i].phone);
	}
	
	/*5. Apodesmeusi Mnimis */
	free(pinakas);
}
