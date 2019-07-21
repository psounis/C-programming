#include <stdio.h>

main()
{
	int N=9;
	int i,j,k;
	
	for (i=N; i>=1; i--)
	{
		for (k=1; k<=3; k++)
		{
			for (j=1; j<=i; j++)
				printf("%d",j);
			for (j=1; j<=N-i; j++)
				printf(" ");
				
			for (j=1; j<=N-i; j++)
				printf(" ");
			for (j=i; j>=1; j--)
				printf("%d",j);
		}
					
		printf("\n");
	}
}
