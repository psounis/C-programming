/* fflush.c: Epideiksi tis entolis ungetc */

#include <stdio.h>

main()
{
   	int x,y,z;
   	char c;

   	printf("Dwse enan tripsifio arithmo:");
   	scanf("%1d%1d%1d", &x,&y,&z);

	fflush(stdin);

	printf("Epelekse M-Monades,D-Dekades,E-Ekatontades: ");
	scanf("%c",&c);
	
	switch(c)
	{
		case 'M': 
			printf("Monades=%d",z);
			break;
		case 'D': 
			printf("Dekades=%d",y);
			break;
		case 'E': 
			printf("Ekatontades=%d",z);
			break;
		default:
			printf("Lathos eisodos!");
	}
}

