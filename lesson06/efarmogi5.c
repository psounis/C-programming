#include <stdio.h>

int mkd(int a, int b);

main()
{
	int a,b;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &a);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &b);
	
	printf("O MKD twn dyo arithmwn einai o %d", mkd(a,b));
	
}

int mkd(int a, int b)
{
	
	if (a==b)
		return a;
	else if (a<b)
		return mkd(a,b-a);
	else
		return mkd(a-b,b);
}
