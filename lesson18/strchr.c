/* strchr.c: Anadeiknyei ti xrisi tis strchr */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	int i;
	char str[N], ch;
	char *ptr;
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	printf("Dwse to xaraktira: ");
	ch=getchar();
	/* anazitisi me tin strchr */	
	ptr=strchr(str,ch);
	while(ptr!=NULL)
	{
		puts(ptr);
		ptr=strchr(ptr+1,ch);
	}
}
