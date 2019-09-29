/* strcat.c: Epideikniei ti xrisi tis strcat */

#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str1[N], str2[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira 1: ");
	gets(str1);
	printf("Dwse ti simvoloseira 2: ");
	gets(str2);
		
	/* antigrafi me tin strcat */
	strcat(str1,str2);
	printf("\nstr1=%s",str1);
	strcat(str1,str2);
	printf("\nstr1=%s",str1);
}
