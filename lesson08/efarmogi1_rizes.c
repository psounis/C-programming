#include <stdio.h>
#include <math.h>

int rizes(float a, float b, float c, float *x1, float *x2);

main()
{
	float a,b,c,riza1,riza2;
	int plithos;
	
	/* 1. Diavasma tis eisodou */
	
	printf("Dwse to a: ");
	scanf("%f",&a);
	
	printf("Dwse to b: ");
	scanf("%f",&b);

	printf("Dwse to c: ");
	scanf("%f",&c);	

	/* 2. Ypologismos rizwn */
	plithos=rizes(a,b,c,&riza1, &riza2);
	
	/* 3. Ektypwsi tou apotelesmatos */
	
	if (plithos==0)
		printf("Den exei pragmatikes rizes");
	else if (plithos==1)
		printf("Exei dipli riza tin %f", riza1);
	else 
		printf("Exei rizes: %f kai %f", riza1, riza2);
	
}

int rizes(float a, float b, float c, float *x1, float *x2)
{
	float D;
	
	D=b*b-4*a*c;
	
	if (D<0)
		return 0;
	else if (D==0)
	{
		*x1 = -b/(2*a);
		return 1;
	}
	else 
	{
		*x1=(-b+sqrt(D))/(2*a);
		*x2=(-b-sqrt(D))/(2*a);
		return 2;
	}
}
