#include <stdio.h>
#include <conio.h>


main()
{
	char c;
	
	c=getch();
	while (c!='\n')
	{
		if (c>='A' && c<='Z')
			printf("%c",c);
		else if (c>='a' && c<='z')
			printf("%c",c-32);
		
		c=getch();
	}
}
