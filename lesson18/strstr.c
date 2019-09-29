/* strstr.c: Anadeiknyei ti xrisi tis strstr */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str1[N], str2[N];
	char *ptr;
	
	/* eisodos */
	printf("Dwse to keimeno sto opoio anazitoume: ");
	gets(str1);
	printf("Dwse ti anazitoume: ");
	gets(str2);
	
	/* anazitisi me tin strstr */	
	ptr=strstr(str1,str2);
	while(ptr!=NULL)
	{
		printf("Stin thesi %d: %s\n",ptr-str1,ptr);
		ptr=strstr(ptr+1,str2);
	}
}
