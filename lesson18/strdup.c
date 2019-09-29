/* strdup.c: Anadeiknyei ti xrisi tis strdup */
#include <stdio.h>
#include <string.h>

#define N 80

main()
{
	char str[N];
	char *str2;
	
	/* eisodos */
	printf("Dwse ti simvoloseira: ");
	gets(str);
	/* antigrafi me tin strdup */		
	str2=strdup(str);
	/* eksodos */
	if (!str2)
	{
		printf("Adynamia desmeusis mnimis!");
	}
	else{
		printf("Antigrafike: %s me mikos: %d",str2,strlen(str2));
	}
}

