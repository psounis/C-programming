#include <stdio.h>

#define SIZE 20


main()
{
	int pinakas[SIZE];
	int i,min;
	int N;
	
	/* 1.Eisagwgi tou N (1...20) me amintiko programmatismo */
	
	do
	{
		printf("Dwse to N: ");
		scanf("%d",&N);
	} while (N<2 || N>20);
	
	/* 2.Diavasma twn N arithmwn */
	
	for (i=0; i<N; i++)
	{
		printf("Dwse ton %d-o arithmo: ", i+1);
		scanf("%d",&pinakas[i]);
	}
	
	
	/* 3. Ypologismos tou elaxistou tou pinaka */
	
	min=pinakas[0];
	
	for (i=1; i<N; i++)
	{
		if (pinakas[i]<min)
			min=pinakas[i];
	}
	
	printf("o elaxistos einai to %d",min);
}
