/* strcpy.c: Epideikniei ti xrisi tis strcpy */

#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str1[N], str2[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str1);
	
	/* antigrafi me tin strcpy */
	strcpy(str2,str1);
	
	/* eksodos */
	printf("str1=%s, str2=%s",str1,str2);
	
}
