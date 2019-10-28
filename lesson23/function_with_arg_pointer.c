/* function_with_arg_pointer.c  */

#include <stdio.h>

int inc(int x);
int dec(int x);
int half(int x);

int func(int (*ptr1)(int), int arg);

main()
{
    printf("result=%d", func(inc, 2));
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

int func(int (*ptr1)(int), int arg)
{
    return ptr1(arg);
}
