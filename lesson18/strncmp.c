/* strncmp.c: Anadeiknyei ti xrisi tis strncmp */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	int res,l=4;
	char str1[N], str2[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira 1: ");
	gets(str1);
	printf("Dwse ti simvoloseira 2: ");
	gets(str2);
	/* sygkrisi me tin strncmp */	
	res=strncmp(str1,str2,l);
	/* eksodos */
	if (res<0)
		printf("str1<str2 (res=%d)",res);
	else if (res==0)
		printf("str1==str2 (res=%d)",res);
	else
		printf("str1>str2 (res=%d)",res);
}
