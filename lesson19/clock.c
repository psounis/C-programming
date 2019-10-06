/* clock.c: Ektipwsi toy xronoy apo tin arxi toy programmatos */
#include <stdio.h>
#include <time.h>

main()
{
	clock_t t;
	t = clock();
	printf("Kikloi: %ld\n", t);
	
	printf("Kikloi ana deyterolepto: %ld\n", CLOCKS_PER_SEC);
	
	printf("Xronos apo tin enarksi: %f", (float)t/CLOCKS_PER_SEC);	
	
}

