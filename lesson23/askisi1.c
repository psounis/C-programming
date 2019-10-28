#include <stdio.h>
#include <math.h>

typedef double (*pf) (double);

double f(double x);
double g(double x);

void root(pf ptr, double a, double b);

main()
{
	root(g, -1.0, 0.0);
}

double f(double x)
{
	return 2*x; 
}

double g(double x)
{
	return sin(x)+1;
}

void root(pf ptr, double a, double b)
{
	while(1)
	{
		if (fabs(ptr(a))<=0.000005)	
		{
			printf("H riza einai %.3lf", a);
			break;
		}
		else if (fabs(ptr(b))<=0.000005)	
		{
			printf("H riza einai %.3lf", b);
			break;
		}
		else if (ptr(a)*ptr(b)>0)
		{
			printf("Pithanon den yparxei riza");
			break;
		}
		else //eterosimoi
		{
			if (fabs(ptr((a+b)/2))<=0.000005)
			{
				printf("H riza einai %.3lf", (a+b)/2);
				break; 
			}
			if (ptr(a)*ptr((a+b)/2)>0)
			{
				a=(a+b)/2;
			}
			else
			{
				b=(a+b)/2;
			}
		}
		
	}
}
