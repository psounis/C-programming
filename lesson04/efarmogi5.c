#include <stdio.h>

main()
{
	int x;
	int hours, min, sec;
	
	printf("Eisagete plithos deuteroleptwn: ");
	scanf("%d", &x);
	
	hours=x/3600;
	
	x=x%3600;
	
	min=x/60;
	sec=x%60;
	
	printf("Wres: %d", hours);
	printf("\nLepta: %d",min);
	printf("\nDeuterolepta: %d",sec);
	
}
