/* strspn.c: Anadeiknyei ti xrisi tis strcspn */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str1[N], str2[N];
	char *ptr;
	int i,length;
	
	/* eisodos */
	printf("Dwse ti 1i simvoloseira: ");
	gets(str1);
	printf("Dwse ti 2i simvoloseira: ");
	gets(str2);
	
	/* anazitisi me tin strspn */	
	length=strspn(str1,str2);
	if (length>0)
	{
		printf("Oi prwtoi %d xaraktires tis str1 periexontai stin stin str2:",length);
		for (i=0; i<length; i++)
			printf("%c",str1[i]);
	}
	else
		printf("Oi symvoloseires den tairiazoun");
}
