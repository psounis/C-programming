/* math.exp.c: Anadeiknyei tis sinartiseis ipswsis se dinami */
#include <stdio.h>
#include <math.h>

main()
{
	double x,y;
	
	printf("pow");
	printf("\nDwse vasi arithmou: ");
	scanf("%lf",&x);
	printf("Dwse ektheti arithmou: ");
	scanf("%lf",&y);
	printf("%lf%lf=%lf",x,y,pow(x,y));
}
