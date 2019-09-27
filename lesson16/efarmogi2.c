#include <stdio.h>

main()
{
	char string[100];
	char c;
	int i;
	
	printf("Dwse ti simvoloseira: ");
	c=getchar();
	i=0;
	while (c!='\n')
	{
		string[i]=c;
		
		c=getchar();
		i++;
	}
	string[i]='\0';
	
	printf("H symvoloseira einai: ");
	i=0;
	while (string[i]!='\0')
	{
		putchar(string[i]);
		
		i++;
	}
	
}
