#include <stdio.h>

main()
{
	int x,y,z;
	
	printf("Dwse ton 1o arithmo: ");
	scanf("%d", &x);
	
	printf("Dwse ton 2o arithmo: ");
	scanf("%d", &y);
	
	printf("Dwse ton 3o arithmo: ");
	scanf("%d", &z);	
	
	
	if (x>y)
	{
		if (x>z)
		{
			printf("O megaliteros einai to %d", x);
		}
		else // z>=x
		{
			printf("O megaliteros einai to %d", z);
		}
	}
	else // y>=x
	{
		if (y>z)
		{
			printf("O megaliteros einai to %d", y);
		}
		else // z>=y
		{
			printf("O megaliteros einai to %d", z);
		}
	}
	
}
