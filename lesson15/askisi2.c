#include <stdio.h>

#define N 10

main()
{
	char string[N];
	char check[2];
	int i; 
	
	printf("Dwse simvoloseira: ");
	
	fgets(string, N, stdin);
	
	for (i=0; i<N; i++)
	{
		if (string[i]=='\0')
			break;
	}
	
	if (string[i-1]=='\n')
	{
		string[i-1]='\0';
		printf("H symvoloseira diavastike, einai: %s", string);
	}
	else
	{
		fgets(check, 2, stdin);	
		if (check[0]=='\n')
		{
			printf("H symvoloseira diavastike, einai: %s", string);
		}
		else
		{
			printf("H symvoloseira den diavastike. To meros einai: %s", string);
			fflush(stdin);
		}
	}
}
