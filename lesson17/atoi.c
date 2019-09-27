/* atoi.c: epideikniei tin sinartisi atoi */

#include <stdio.h>

main(int argc, char *argv[])
{
	int x,y;

	if(argc!=3)
	{
		printf("Prepei na eisagete 2 orismata!");
	}
	else
	{
		x=atoi(argv[1]);
		y=atoi(argv[2]);
		
		printf("\nOrismata = %d kai %d",x,y);
	}
}
