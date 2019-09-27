/* redirect_output.c: tha to xrisimopoiisoume 
		gia anakateuthinsi eksodou */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i;
	
	srand(time(NULL));
	for (i=0; i<20; i++)
		printf("%d\n",rand()%1000);
}
