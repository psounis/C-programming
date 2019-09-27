/* fprintf.c: Epideiksi tis puts */

#include <stdio.h>

main()
{
	int i;
	
	for (i=0; i<100; i++)
	{
		fprintf(stdout,"\n%d*%d*%d=%d",i,i,i,i*i*i);
	}
		
}
