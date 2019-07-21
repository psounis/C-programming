#include <stdio.h>

#define SIZE 1000

int mystrlen(char *s);

main()
{
	char str[SIZE];
	
	printf("Dwse tin simvoloseira: ");
	gets(str);
	
	printf("To mikos tis simvoloseiras einai %d", mystrlen(str));
}

int mystrlen(char *s)
{
	int cnt=0;
	
	while(s[cnt]!='\0')
	{
		cnt++;
	}
	
	return cnt;
}
