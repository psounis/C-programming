#include <stdio.h>

#define SIZE 100

main()
{
	char string[SIZE];
	int ret; 
	
	printf("Dwse simvoloseira: ");
	
	while (1)
	{
		ret=scanf("%s", string);
		printf("\n%d: %s", ret, string);
	}
}
