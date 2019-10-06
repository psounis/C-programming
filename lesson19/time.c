/* time.c: Deuterolepta apo tin 1.1.1970 */
#include <stdio.h>
#include <time.h>

main()
{
	time_t t;
	
	t = time(0);
	
	printf("Deyterolepta= %ld", t);
}

