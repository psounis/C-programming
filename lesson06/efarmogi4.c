#include <stdio.h>

int fibonacci(int n);

main()
{
	int n;
	
	printf("Dwse ton arithmo: ");
	scanf("%d",&n);
	
	printf("O arithmos Fibonacci-%d einai %d", n, fibonacci(n));
}

int fibonacci(int n)
{
	if (n==1 || n==2)
		return 1;
	else 
		return fibonacci(n-1)+fibonacci(n-2);
}
