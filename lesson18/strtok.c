/* strtok.c: Anadeiknyei ti xrisi tis strtok */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	int i,res;
	char str[N], *p;
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	/* xwrismos me tin strtok */	
	p=strtok(str," ,.");
	/* eksodos */
	while(p!=NULL)
	{
		printf("%s\n",p);
		p=strtok(NULL," ,.");
	}
}
