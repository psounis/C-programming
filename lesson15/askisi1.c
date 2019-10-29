#include <stdio.h>
#include <conio.h>

main()
{
	char c;
	
	c = getch();
	while (c!='.')
	{
		if (c>='a' && c<='z')
			c-=32;
		printf("%c",c);
		
		c=getch(); 
	}
	printf("%c",c);
}
