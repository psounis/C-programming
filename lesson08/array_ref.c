#include <stdio.h>

void f(int *p, int n);

main()
{
	int pin[100];
	int i;
	
	for (i=0; i<100; i++)
		pin[i]=i;
	
	
	for (i=0; i<100; i++)
		printf("%d ", pin[i]);
	
	
	f(pin,100);

	printf("\n\n");
	for (i=0; i<100; i++)
		printf("%d ", pin[i]);
	
}


void f(int *p, int n)
{
	int i;
	
	for (i=0; i<n; i++)
		p[i]=2*i;
}
