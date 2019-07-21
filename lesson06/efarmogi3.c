#include <stdio.h>

int isprime(int n);

main()
{
	int i,start, finish;
	
	/* Diavasma eisodou */
	do{
		printf("Dwse tin arxi tou diastimatos: ");
		scanf("%d",&start);
		
		if (start<=0)
			printf("Lathos Eisodos. Prepei na einai >0.");
			
	} while (start<=0);

	do{
		printf("Dwse to telos tou diastimatos: ");
		scanf("%d",&finish);
		
		if (finish<=0)
			printf("Lathos Eisodos. Prepei na einai >0.");
			
		if (finish<start)
			printf("Lathos Eisodos. Prepei na einai >%d", start);
			
	} while (finish<=0 || finish<start);
	
	/* Elegxos prwtwn arithmwn sto diastima */
	
	for (i=start; i<=finish; i++)
	{
		if (isprime(i))
			printf("\nTo %d einai prwtos", i);
	}
	
}

int isprime(int n)
{
	int i;
	int check;
	
	check=1; // o arithmos einai prwtos
	for (i=2; i<=n/2; i++)
		if (n%i==0)
			check=0; //o arithmos den einai prwtos
	
	if (check)
		return 1;
	else
		return 0;
}
