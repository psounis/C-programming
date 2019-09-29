/* strlen.c: Epideikniei ti xrisi tis strlen */

#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str[N];
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	
	/* eksodos */
	printf("Mikos=%d",strlen(str));
}
