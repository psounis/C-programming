/* time.print.c: Ektipwsi tou xronou */
#include <stdio.h>
#include <time.h>

main()
{
	time_t t;
	t = time(0);
	printf("%s", ctime(&t));
}

