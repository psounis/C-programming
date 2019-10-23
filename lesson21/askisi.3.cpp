#include <stdio.h>
#include <stdarg.h>

double average(int n, ...);

main()
{
    printf("%.2lf\n", average(5,1,2,3,4,6));
}

double average(int n, ...)
{
	int i;
	double sum; 
	va_list ptr;
	
	va_start(ptr,n);
	
	sum=0.0;
	for (i=0; i<n; i++)
		sum+=va_arg(ptr,int);
		
	va_end(ptr);
	
	
	return sum/n; 
}
