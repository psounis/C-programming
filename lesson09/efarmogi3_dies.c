#include <stdio.h>

main()
{
	int N=5;
	int i,j,k;
	int x1,x2;
	
	x1=12345;
	x2=54321;
	
	for (i=N; i>=1; i--)
	{
		for (k=1; k<=3; k++)
		{
			printf("%d",x1);
			for (j=1; j<=N-i; j++)
				printf(" ");
				
			for (j=1; j<=N-i; j++)
				printf(" ");
			printf("%d",x2);
		}
		x1=x1/10;
		x2=x2/10;
					
		printf("\n");
	}
}
