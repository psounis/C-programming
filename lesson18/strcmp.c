/* strcmp.c: Anadeiknyei ti xrisi tis strcmp */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	int res;
	char str1[N], str2[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira 1: ");
	gets(str1);
	printf("Dwse ti simvoloseira 2: ");
	gets(str2);
    
	/* sygrisi me tin strcmp */		
	res=strcmp(str1,str2);
	if (res<0)
		printf("str1<str2 (res=%d)",res);
	else if (res==0)
		printf("str1==str2 (res=%d)",res);
	else
		printf("str1>str2 (res=%d)",res);
}
