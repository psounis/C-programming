#include <stdio.h>

int is_even(int n);
int is_odd(int n);
int is_square(int n);
int is_cube(int n);

main()
{
	int x;
	
	printf("Eisagete ton arithmo: ");
	scanf("%d",&x);
	
	if (is_even(x))
		printf("\nEinai Artios");
		
	if (is_odd(x))
		printf("\nEinai Perittos");
	
	if (is_square(x))
		printf("\nEinai Tetragwno Arithmou");
		
	if (is_cube(x))
		printf("\nEinai Kivos Arithmou");	
}

int is_even(int n)
{
	if (n%2==0)
		return 1;
	else
		return 0;
}

int is_odd(int n)
{
	if (n%2==1)
		return 1;
	else
		return 0;
}

int is_square(int n)
{
	int i;
	
	for (i=1; i<=n; i++)
	{
		if (i*i==n)
			return 1;
		else if (i*i>n)
			return 0;
	}
}

int is_cube(int n)
{
	int i;
	
	for (i=1; i<=n; i++)
	{
		if (i*i*i==n)
			return 1;
		else if (i*i*i>n)
			return 0;
	}
}
