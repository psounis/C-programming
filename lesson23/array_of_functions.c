/* array_of_functions.c  */

#include <stdio.h>

#define N 3

int inc(int x);
int dec(int x);
int half(int x);

main()
{
    int (*ptr [N])(int);
    int i; 
    
    ptr[0]=inc;
    ptr[1]=dec;
    ptr[2]=half; 
    
    for (i=0; i<N; i++)
        printf("%d ", ptr[i](3));

}

int inc(int x)
{
    return ++x; 
}

int dec(int x)
{
    return --x; 
}

int half(int x)
{
    return x/2; 
}

