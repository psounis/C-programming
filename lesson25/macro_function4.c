/* macro_function4.c */

#include <stdio.h>

#define v(x) v ## x

main()
{
    int i, v1=1, v2=2; 
    
    printf("%d", v(1));
    printf("%d", v(2));
}

