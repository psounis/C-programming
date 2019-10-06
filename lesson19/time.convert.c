/* time.convert.c: MEtatropes stis anaparastaseis */
#include <stdio.h>
#include <time.h>

main()
{
	time_t t;
	struct tm *now;	
	t = time(0);
	now = localtime(&t);
	printf("%d:%d:%d",now->tm_hour, now->tm_min, now->tm_sec);
}

