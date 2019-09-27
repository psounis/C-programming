/* redirect_input.c: tha to xrisimopoiisoume 
		gia anakateuthinsi eisodou */

#include <stdio.h>
#define N 20

main()
{
	int i;
	int array[N];
	
	for (i=0; i<N; i++)
	{
		printf("Dwse ton epomeno arithmo: ");
		scanf("%d", &array[i]);
	}
	printf("\nPeriexomena Pinaka: ");
	for (i=0; i<N; i++)
		printf("%d ",array[i]);		
}
