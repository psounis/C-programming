#include <stdio.h>

main()
{
	int x,y;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &y);
	
	
	if (x>y)
		printf("O megaliteros einai o %d",x);
	else // y>=x
		printf("O megaliteros einai o %d",y);	
}
