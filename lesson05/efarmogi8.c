#include <stdio.h>

#define SIZE 20


main()
{
	int pinakas[SIZE];
	int i,sum;
	int N;
	float mo;
	
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
	
	
	/* 3. Ypologismos athroismatos */
	
	sum=0;
	
	for (i=0; i<N; i++)
	{
		sum+=pinakas[i];
	}
	
	/* 4. Ypologismos mesou orou */	
	mo=sum/(float)N;
	
	printf("o mesos oros einai %f",mo);
}
