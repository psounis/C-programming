#include <stdio.h>

main()
{
	int age;
	
	printf("Dwse tin ilikia sou: ");
	scanf("%d",&age);
	
	if (age<18)
	{
		printf("Eisai Anilikos!");
	}
	else
	{
		if (age<=65)
		{
			printf("Eisai enilikos!");
		}
		else
		{
			printf("Eisai sintaksiouxos!");
		}
	}
}
