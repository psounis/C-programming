/* strrchr.c: Anadeiknyei ti xrisi tis strrchr */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str[N], ch;
	char *ptr;
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	printf("Dwse to xaraktira: ");
	ch=getchar();
	/* anazitisi me tin strrchr */	
	ptr=strrchr(str,ch);
	
	puts(ptr);

}
