#include <stdio.h>

main()
{
	int etos;
	
	printf("Eisagete etos: ");
	scanf("%d", &etos);
	
	if (etos%4==0)
	{
		if (etos%100==0 && etos%400==0)
		{
			printf("Den einai disekto!");
		}
		else
		{
			printf("Einai disekto!");
		}
	}
	else
	{
		printf("Den einai disekto!");
	}
}
