#include <stdio.h>
#define SIZE 1000

char *mystrcpy(char *dest, char *src);

main()
{
	char str1[SIZE], str2[SIZE], str3[SIZE];
	int choice;
	
	printf("Dwse ti 1i simvoloseira: ");
	gets(str1);

	printf("Dwse ti 2i simvoloseira: ");
	gets(str2);

	printf("Epelekse mia simvoloseira (1 i 2): ");
	scanf("%d", &choice);
	
	if (choice==1)
		mystrcpy(str3,str1);
	else if (choice==2)
		mystrcpy(str3,str2);
	
	printf("\n\n1: %s\n2: %s\n3: %s", str1,str2,str3);
}

char *mystrcpy(char *dest, char *src)
{
	int i;
	
	while (1)
	{
		dest[i]=src[i];
		if (src[i]=='\0') 
			break;
		i++;
	}
	
	return dest;
}
