/* strcspn.c: Anadeiknyei ti xrisi tis strcspn */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str[N], ch;
	int pos;
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	
	/* anazitisi me tin strcspn */	
	pos=strcspn(str,"abc");
	if (pos!=strlen(str))
		printf("Apo ti thesi %d: %s",pos, &str[pos]);
	else
		printf("Den vrethikan oi xaraktires abc stin %s", str);
}
