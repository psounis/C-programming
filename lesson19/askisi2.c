/* c19.askisi2.c */
#include <stdio.h>
#include <time.h>

long fibonacci(int n);

main()
{
	int i;
	clock_t c1, c2;
	
	for (i=1; i<=50; i++)
	{
		c1=clock(); 
		printf("fib(%d)=%ld",i,fibonacci(i));
		c2=clock(); 
		
		printf("\t Time=%lf\n",(double)(c2-c1)/CLOCKS_PER_SEC);
	}
	
}

long fibonacci(int n)
{
	if (n==1 || n==2)
		return 1;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}