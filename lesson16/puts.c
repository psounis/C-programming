/* puts.c: Epideiksi tis puts */

#include <stdio.h>

main()
{
	int i;
	char *s="Hello World!";
	
	puts(s);
	puts("-----------------");
	
	for (i=0; i<100; i++)
	{
		puts(&s[i]);
		
		if (s[i]=='\0')
			break;
	}
		
}
