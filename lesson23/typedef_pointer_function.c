/* typedef_pointer_function.c  */

#include <stdio.h>

typedef int (*pf) (int, int);

int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);

main()
{
    int x,y, choice; 
    pf ptr;

    printf("Dwse x: ");
    scanf("%d", &x);
    printf("Dwse y: ");
    scanf("%d", &y);
    printf("Dwse sinartisi (1-add, 2-sub, 3-mult): ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1: 
            ptr=add; 
            break;
        case 2:
            ptr=sub;
            break;
        case 3:
            ptr=mult;
    }
    
    printf("result=%d", ptr(x,y));
}

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mult(int a, int b)
{
    return a*b;
}
