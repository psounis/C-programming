#include <stdio.h>

int isprime(int n);

main()
{
	int i, start, finish;
	
	do {
		printf("Dwse tin arxi tou diastimatos: ");
		scanf("%d", &start);
		
		if (start<=0)
			printf("Lathos Eisodos. Prepei na einai >0");
	} while(start<=0);
	
	
	do {
		printf("Dwse to peras tou diastimatos: ");
		scanf("%d", &finish);
		
		if (!(start<=finish))
			printf("Lathos Eisodos. Prepei na einai >%d(start)", start);
	} while(!(start<=finish));
	
	for (i=start; i<=finish; i++)
		if (isprime(i))
			printf("\nTo %d einai prwtos", i);
}

int isprime(int n)
{
	int i;
	int check; 
	
	if (n==0||n==1)
		return 0;
	
	check=1;
	for (i=2; i<=n/2; i++)
		if (n%i==0)
			check=0;

	return check;
}
