#include <stdio.h>
#define SIZE 150


main()
{
	char str[SIZE];
	int i;
	
	printf("Dwse ti simvoloseira: ");
	gets(str);
	
	i=0;
	
	while (str[i]!='\0')
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		
		i++;
	}
	
	printf("Nea symvoloseira: %s", str);
	
}
