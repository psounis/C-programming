/* macro_function2.c */

#include <stdio.h>

#define sum(x,y) ((x)+(y))

main()
{
    int v = sum(5,5*3);
    printf("sum=%d\n", v);
}

