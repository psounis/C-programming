/* va_arg.c Metavlitos arithmos orismatwn*/ 

#include <stdio.h>
#include <stdarg.h>

int sum(int n, ...);

main()
{
    printf("%d\n", sum(5,1,2,3,4,5));
}

int sum(int n, ...)
{
	int i, s; 
	va_list ptr;
	
	va_start(ptr,n);
	
	s=0;
	for (i=0; i<n; i++)
		s+=va_arg(ptr,int);
		
	va_end(ptr);
	
	return s; 
}
