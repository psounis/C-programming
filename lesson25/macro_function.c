/* macro_function.c */

#include <stdio.h>

#define half(x) ((x)/2)

main()
{
    int i=5; 
    float f=2.2;
	
    printf("half(%d)=%d\n", i, half(i));
    printf("half(%.1f)=%.1f\n", f, half(f));
}

