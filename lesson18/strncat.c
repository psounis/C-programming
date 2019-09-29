/* strncat.c: Epideikniei ti xrisi tis strncat */

#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	int i;
	char str1[N], str2[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira 1: ");
	gets(str1);
	printf("Dwse ti simvoloseira 2: ");
	gets(str2);
		
	/* antigrafi me tin strcat */
	for (i=1; i<=5; i++)
	{
		strncat(str1,str2,i);
		printf("\nstr1=%s",str1);	
	}
}
