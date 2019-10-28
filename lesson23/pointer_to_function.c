/* pointer_to_function.c Deiktis se sinartisi */

#include <stdio.h>

int sum(int a, int b);

main()
{
    int (*ptr)(int, int);
    
    ptr=sum;
    
    printf("%d", ptr(1,2));
}

int sum(int a, int b)
{
    return a+b;
}